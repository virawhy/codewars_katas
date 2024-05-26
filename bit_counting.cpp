#include <iostream>
#include <bitset>
#include <algorithm>

unsigned int countBits(unsigned long long n)
{
    std::string bits = std::bitset<64>(n).to_string();
    return std::count(bits.begin(), bits.end(), '1');
}
int main()
{
    std::cout << countBits(0) << std::endl;
    std::cout << countBits(4) << std::endl;
    std::cout << countBits(7) << std::endl;
    std::cout << countBits(9) << std::endl;
    std::cout << countBits(10) << std::endl;
    std::cout << countBits(26) << std::endl;
    std::cout << countBits(77231418) << std::endl;
    std::cout << countBits(12525589) << std::endl;
    std::cout << countBits(3811) << std::endl;
    std::cout << countBits(392902058) << std::endl;

    return 0;
}