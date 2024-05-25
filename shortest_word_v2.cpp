#include <iostream>
#include <string>
#include <sstream>

int find_short(std::string str)
{
    int min_letters = str.length();
    std::istringstream stream(str);
    std::string word;

    while (stream >> word)
    {
        if (word.length() < min_letters)
        {
            min_letters = word.length();
        }
    }
    return min_letters;
}

int main()
{
    std::cout << find_short("bitcoin take over the world maybe who knows perhaps") << std::endl;
    std::cout << find_short("turns out random test cases are easier than writing out basic ones") << std::endl;
    std::cout << find_short("lets talk about javascript the best language") << std::endl;
    std::cout << find_short("i want to travel the world writing code one day") << std::endl;
    std::cout << find_short("Lets all go on holiday somewhere very cold") << std::endl;
    std::cout << find_short("Let's travel abroad shall we") << std::endl;
    return 0;
}