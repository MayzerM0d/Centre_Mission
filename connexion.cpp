#include "connexion.h"

#include <cstdlib>
#include <iostream>

//using request_body_t = boost::beast::http::string_body;

#include <boost/beast.hpp>
#include <boost/asio.hpp>
#include <iostream>

namespace asio = boost::asio;
namespace beast = boost::beast;
namespace http = beast::http;
using tcp = asio::ip::tcp;


connexion::connexion() {}

std::string connexion::comPOST(std::string target,std::string dataStr)
{
    asio::io_context io_context;
    // Résolution de l'adresse IP du serveur
    tcp::resolver resolver(io_context);
    auto endpoints = resolver.resolve(host, port);

    // Établissement de la connexion TCP avec le serveur
    tcp::socket socket(io_context);
    asio::connect(socket, endpoints);

    http::request<http::string_body> req{ http::verb::post, target, 11 };
    req.set(http::field::host, host);
    req.set(http::field::user_agent, BOOST_BEAST_VERSION_STRING);
    // Définir les données à envoyer : remplir le body avec les données

    req.body() = dataStr;
    std::cout << "body req :" << req.body() << std::endl;
    req.prepare_payload();

    // Send the HTTP request to the remote host
    http::write(socket, req);

    // This buffer is used for reading and must be persisted
    beast::flat_buffer buffer;

    // Declare a container to hold the response
    http::response<http::string_body> res;

    // Receive the HTTP response
    http::read(socket, buffer, res);
    std::cout << "Msg: " << res.body() << std::endl;
    std::string reponse = res.body();
    if (socket.is_open()) socket.close();

    return reponse;
}
std::string connexion::comGET(std::string target)
{
    asio::io_context io_context;
    // Résolution de l'adresse IP du serveur
    tcp::resolver resolver(io_context);
    auto endpoints = resolver.resolve(host, port);

    // Établissement de la connexion TCP avec le serveur
    tcp::socket socket(io_context);
    asio::connect(socket, endpoints);

    http::request<http::string_body> req{ http::verb::get, target, 11 };
    req.set(http::field::host, host);
    req.set(http::field::user_agent, BOOST_BEAST_VERSION_STRING);

    req.prepare_payload();

    // Send the HTTP request to the remote host
    http::write(socket, req);

    // This buffer is used for reading and must be persisted
    beast::flat_buffer buffer;

    // Declare a container to hold the response
    http::response<http::string_body> res;

    // Receive the HTTP response
    http::read(socket, buffer, res);
    std::cout << "Msg: " << res.body() << std::endl;
    std::string reponse = res.body();
    if (socket.is_open()) socket.close();

    return reponse;
}

void tokenize(std::string const& str, const char delim, std::vector<std::string>& out)
{
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}
