#ifndef TRIM_H
#define TRIM_H

#include <string>

// Supprime les espaces au début et à la fin d'une chaîne
inline std::string trim(const std::string& str)
{
    size_t first = str.find_first_not_of(" \t\n\r");
    size_t last = str.find_last_not_of(" \t\n\r");
    return (first == std::string::npos) ? "" : str.substr(first, last - first + 1);
}

#endif // TRIM_H
