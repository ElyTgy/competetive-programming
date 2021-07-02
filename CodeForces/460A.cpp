#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    int n;
    int m;

    std::cin>>n;
    std::cin>>m;

    int mMultipleCount = 0;

    for(int i = 1; i <= n; ++i)
    {
        if(i%m==0){++n;}
    }

    std::cout<<n;
}