#ifndef CONNEXION_H
#define CONNEXION_H

#include <string>

class Connexion {
public:
    Connexion(const std::string& host, const std::string& port = "2222");
    bool seConnecter(const std::string& username, const std::string& password);

private:
    std::string hote_;
    std::string port_;
};
