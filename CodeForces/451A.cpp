#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;


void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, m;
    std::cin>>n>>m;
    if(min(n, m) % 2 == 0){std::cout<<"Malvika";}
    else{std::cout<<"Akshat";}
}  