#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef long long ull;


void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    std::cin>>n;
    ll ans = 0;   
    for(int i = 1; i <= n/2; ++i)
    {
        ans += 8*i*i;
    }
    std::cout<<ans;
}