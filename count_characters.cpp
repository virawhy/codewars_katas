#include <iostream>
#include <string>
#include <map>

std::map<char, unsigned> count(const std::string &string)
{
    std::map<char, unsigned> occurences;
    if (string.empty())
        return {};
    for (auto &c : string)
        occurences[c]++;
    return occurences;
}

int main()
{
    std::map<char, unsigned> test = count("Destabilization");
    for (auto &m : test)
        std::cout << m.first << "\t" << m.second << std::endl;
    return 0;
}