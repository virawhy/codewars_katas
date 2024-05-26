#include <iostream>
#include <string>
#include <sstream>
#include <map>

int wordScore(std::string word)
{
    int score = 0;
    for (char c : word)
    {
        if (isalpha(c))
            score += tolower(c) - 'a' + 1;
    }
    return score;
}
std::string highestScoringWord(const std::string &str)
{
    std::map<int, std::string> scores;
    std::string word;
    std::istringstream stream(str);

    while (stream >> word)
    {
        if (scores.find(wordScore(word)) == scores.end())
            scores[wordScore(word)] = word;
    }
    return prev(scores.end())->second;
}

int main()
{
    std::cout << highestScoringWord("man i need a taxi up to ubud") << std::endl;
    std::cout << highestScoringWord("what time are we climbing up the volcano") << std::endl;
    std::cout << highestScoringWord("take me to semynak") << std::endl;
    std::cout << highestScoringWord("massage yes massage yes massage") << std::endl;
    std::cout << highestScoringWord("take two bintang and a dance please") << std::endl;
    std::cout << highestScoringWord("aa b") << std::endl;

    return 0;
}