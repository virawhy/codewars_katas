#include <iostream>
#include <string>
#include <map>

std::string DNAStrand(std::string dna)
{
    std::map<char, char> mapping = {{'A', 'T'}, {'T', 'A'}, {'C', 'G'}, {'G', 'C'}};
    for (auto &c : dna)
        c = mapping.at(c);
    return dna;
}

int main()
{
    std::cout << DNAStrand("ATTGC") << std::endl;
    return 0;
}