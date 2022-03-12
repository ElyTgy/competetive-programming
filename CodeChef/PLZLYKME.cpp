#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
typedef unsigned long long ull;

void Solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    std::cin>>t;
    while (t--)
    {
        Solve();
    }

    return 0;
}

void Solve()
{
    int L;
    ull D;
    ull S;
    ull C;
    std::cin>>L>>D>>S>>C;
    ull acc = S;
    for(ull i = 1; i < D; ++i)
    {
        acc = acc + acc* C;
    }
    if(acc >= L)
    {
        std::cout<<"ALIVE AND KICKING\n";
    }
    else{std::cout<<"DEAD AND ROTTING\n";}
}