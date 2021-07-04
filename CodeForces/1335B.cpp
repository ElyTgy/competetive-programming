#include <iostream>
#include <cmath>
#include <string>
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
    int n, a, b;
    std::cin>>n>>a>>b;

    char blist[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    string s;
    int bCounter = 0;
    for(int i = 0; i < n;++i)
    {
        s.push_back(blist[bCounter]);
        if(bCounter+1 == b || bCounter == 26){bCounter = 0;}else{++bCounter;}
    }

    std::cout<<s;

}
