#include <iostream>

int solution(int number)
{

    int sum = 0;


    for (int i = 0; i < number; i++)
    {
        if (!(i % 3) || !(i % 5))
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    std::cout << solution(10);
    return 0;
}