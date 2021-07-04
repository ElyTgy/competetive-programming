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
    
    if(n % 2 != 0){std::cout<<"YES";}
    else{
        //std::cout<<"logarithm result: "<<
        if((log2(double(n)) - (long long)log2(n)) <= 0.0001)
        {
            //std::cout<<"Computation: "<< log2(double(n)) - (long long)log2(n)<<'\n';
            std::cout<<"NO";
        }
        else{
            std::cout<<"YES";}
    }
}
