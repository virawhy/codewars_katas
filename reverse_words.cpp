#include <iostream>
#include <cctype>

std::string reverse_words(std::string str)
{
    std::string buff = "";
    int letter_count = 0;

    for (unsigned long pt_1 = 0; pt_1 <= str.length(); pt_1++)
    {
        if (pt_1 == str.length() || isspace(str[pt_1]))
        {
            for (int pt_2 = 0; pt_2 < letter_count; pt_2++)
            {
                buff += str[pt_1 - pt_2 - 1];
            }
            letter_count = 0;
            if (pt_1 < str.length())
            {
                buff += str[pt_1];
            }
        }
        else
        {
            letter_count++;
        }
    }
    return buff;
}

int main()
{
    std::cout << reverse_words("The quick brown fox jumps over the lazy dog.");
    return 0;
}