#include <iostream>
#include <string>

std::string DNAStrand(const std::string &dna)
{
    std::string converted;
    for (auto c : dna)
    {
        switch (c)
        {
        case 'T':
            converted += 'A';
            break;
        case 'A':
            converted += 'T';
            break;
        case 'C':
            converted += 'G';
            break;
        case 'G':
            converted += 'C';
            break;
        default:
            break;
        }
    }
    return converted;
}

int main()
{
    std::cout << DNAStrand("ATTGC") << std::endl;
    return 0;
}