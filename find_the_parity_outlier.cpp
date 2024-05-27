#include <vector>
#include <map>
#include <math.h>
#include <iostream>

int FindOutlier(std::vector<int> arr)
{
    std::map<int, std::vector<int>> mapping;
    for (int i = 0; i < arr.size(); i++)
        mapping[abs(arr.at(i) % 2)].push_back(arr.at(i));
    return mapping.at(0).size() == 1 ? mapping.at(0).at(0) : mapping.at(1).at(0);
}

int main()
{
    std::vector<int> test = {2, -3, 4};
    std::cout << FindOutlier(test) << std::endl;
    return 0;
}