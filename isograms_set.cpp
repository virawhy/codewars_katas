#include <iostream>
#include <set>

bool is_isogram(std::string str)
{
    std::set<char> occurences;
    for (auto &c : str)
        occurences.emplace(tolower(c));
    return occurences.size() < str.length() ? false : true;
}

int main()
{
    std::cout << is_isogram("Dermatoglyphics") << std::endl;
    std::cout << is_isogram("moose") << std::endl;
    std::cout << is_isogram("isIsogram") << std::endl;
    return 0;
}