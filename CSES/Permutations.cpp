#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    unsigned int n;
    std::cin>>n;
    unsigned int x;

    if(n == 1){std::cout<<"1";}
    else if(n < 4){std::cout<<"NO SOLUTION";}
    //odd
    else if(n & 1)
    {
        for(int i = 2; i <= n-1; i+=2){std::cout<<i<<" ";}
        for(int i = 1; i <= n; i+=2){std::cout<<i<<" ";}
    }
    else
    {
        for(int i = 2; i <= n; i+=2){std::cout<<i<<" ";}
        for(int i = 1; i <= n; i+=2){std::cout<<i<<" ";}
    }
}
