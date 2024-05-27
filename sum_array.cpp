#include <vector>
#include <iostream>
#include <numeric>

int sum(std::vector<int> nums)
{
    if (nums.empty())
        return 0;
    else
        return std::accumulate(nums.begin(), nums.end(), 0);
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 4};
    std::cout << sum(nums) << std::endl;
    return 0;
}