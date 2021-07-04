#include <iostream>
#include <cmath>
#define ull unsigned long long
using namespace std;


void solve();

int main()
{
    int t;
    std::cin>>t;

    while(t > 0)
    {
        solve();
        std::cout<<'\n';
        --t;
    }

    return 0;
}


void solve()
{
    ull n;
    std::cin>>n;
    int moves = 0;
    while(n!=1)
    {
        if(n % 3 == 0)
        {
            if(n % 6 == 0){n = n/6;}
            else{n =n*2;}
            ++moves;
        }
        else{std::cout<<-1; return;}
    }

    std::cout<<moves;
    
}