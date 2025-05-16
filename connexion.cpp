#include "connexion.h"

#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <iostream>
#include <string>
#include <sstream>

namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;
using tcp = net::ip::tcp;

Connexion::Connexion(const std::string& host, const std::string& port)
    : hote_(host), port_(port)
{}

bool Connexion::seConnecter(const std::string& username, const std::string& password)
{
    try {
        net::io_context ioc;
        tcp::resolver resolver(ioc);
        beast::tcp_stream stream(ioc);

        auto const results = resolver.resolve(hote_, port_);
        stream.connect(results);

        // Crée manuellement le corps en format texte brut ou pseudo-JSON (pas de parsing requis)
        std::ostringstream oss;
        oss << "username=" << username << "&password=" << password;
        std::string body = oss.str();

        http::request<http::string_body> req{http::verb::post, "/api/login", 11};
        req.set(http::field::host, hote_);
        req.set(http::field::user_agent, BOOST_BEAST_VERSION_STRING);
        req.set(http::field::content_type, "application/x-www-form-urlencoded");
        req.body() = body;
        req.prepare_payload();

        http::write(stream, req);

        beast::flat_buffer buffer;
        http::response<http::string_body> res;
        http::read(stream, buffer, res);

        std::cout << "Réponse reçue:\n" << res << std::endl;

        // Fermeture propre
        beast::error_code ec;
        stream.socket().shutdown(tcp::socket::shutdown_both, ec);
        if (ec && ec != beast::errc::not_connected)
            throw beast::system_error{ec};

        // On considère que le statut 200 = succès
        return res.result() == http::status::ok;
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
        return false;
    }
}
