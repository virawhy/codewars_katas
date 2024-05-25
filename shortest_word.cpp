#include <iostream>
#include <string>

int find_short(std::string str)
{
    size_t prev_pos = str.find(" ");
    size_t pos = str.find(" ", prev_pos + 1);
    int min_letters = prev_pos;

    while (pos != std::string::npos)
    {
        if (pos == std::string::npos)
        {
            pos = str.length() - 1;
        }
        if (pos - prev_pos - 1 < min_letters)
        {
            min_letters = pos - prev_pos - 1;
        }
        prev_pos = pos;
        pos = str.find(" ", pos + 1);
    }

    if (str.length() - prev_pos - 1 < min_letters)
    {
        min_letters = str.length() - prev_pos - 1;
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