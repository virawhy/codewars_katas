#include <iostream>
#include <string>

bool solution(std::string const &str, std::string const &ending) {
    std::string r_ending = std::string(ending.rbegin(), ending.rend());
    for(int i = 0; i < r_ending.length(); i++)
        if(str[str.length() - 1 - i] != r_ending[i]) return false;
    return true;
}

int main()
{
    std::cout << solution("abcde", "cde") << std::endl;
    std::cout << solution("abcde", "abc") << std::endl;
    std::cout << solution("abc", "") << std::endl;
    return 0;
}