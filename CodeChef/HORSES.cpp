#include <iostream>
#include <algorithm>
using namespace std;


long GetMinDistBruteForce(long int* s, int n)
{
    long min = 1000000001;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (abs(s[j] - s[i]) < min)
            {
                min = abs(s[j] - s[i]);
            }
        }
    }
    return min;
}


long GetMinDistSort(long int* s, int n)
{
    std::sort(s, s + n);
        long min = 1000000001;
    for(int i = 0; i < n - 1; ++i)
    {
        if (abs(s[i] - s[i + 1]) < min)
        {
            min = abs(s[i] - s[i + 1]);
        }
    }
    return min;
}


void solution()
{
    int t;
    int n;
    long s[5000];
    std::cin>>t;
    for(int i = 0; i < t; ++i)
    {
        std::cin>>n;
        for(int j=0; j<n; ++j)
        {
            std::cin>>s[j];
        }

        long min = GetMinDistSort(s, n);
        std::cout<<min<<'\n';
    }
}

int main()
{
    solution();
    return 0;
}

