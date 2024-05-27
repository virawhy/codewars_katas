#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> result;
    for (int i = 0; i < s.length(); i += 2)
        result.emplace_back(s.substr(i, 2));
    if (s.length() % 2)
        result.back() += '_';
    return result;
}

int main()
{
    std::vector<std::string> a = solution("aabbccdde");
    for (const std::string &s : a)
    {
        std::cout << s << "\t";
    }
    return 0;
}