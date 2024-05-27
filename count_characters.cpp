#include <iostream>
#include <string>
#include <map>

std::map<char, unsigned> count(const std::string &string)
{
    std::map<char, unsigned> occurences;
    if (string.empty())
        return {};
    for (auto &c : string)
        occurences[tolower(c)]++;
    return occurences;
}

int main()
{
    return 0;
}