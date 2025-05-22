#ifndef CONNEXION_H
#define CONNEXION_H
#include <string>
#include <vector>

class connexion
{
public:
    std::string comPOST(std::string paramOn,std::string dataStr);
    std::string comGET(std::string paramOn);
    connexion();
private :
    std::string const host = "172.18.10.21";
    std::string const port = "5200";
    int version = 11;
};

void tokenize(std::string const& str, const char delim, std::vector<std::string>& out);
#endif // CONNEXION_H
