#include <iostream>
using namespace std;

static void Solution()
{
    ios::sync_with_stdio(false);
    //cin.tie(0);

    unsigned int n;
    std::cin >> n;
    unsigned int currentNum;
    unsigned long int inputSum = 0;

    for (unsigned int i = 1; i <= n - 1; ++i)
    {
        std::cin >> currentNum;
        inputSum += currentNum;
    }

    unsigned long int oneToNSum = 0;
    for (unsigned int i = 1; i <= n; ++i)
    {
        oneToNSum += i;
    }

    std::cout << oneToNSum - inputSum;

}
