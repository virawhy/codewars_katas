#include <iostream>
#include <map>

bool is_isogram(std::string str)
{
    std::map<char, int> occurences;
    for (auto &c : str)
        if (++occurences[tolower(c)] > 1)
            return false;
    return true;
}

int main()
{
    std::cout << is_isogram("Dermatoglyphics") << std::endl;
    std::cout << is_isogram("moose") << std::endl;
    std::cout << is_isogram("isIsogram") << std::endl;
    return 0;
}