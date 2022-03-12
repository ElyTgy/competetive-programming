#include <iostream>
#include<algorithm>
typedef long long ll;
using namespace std;



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
    ll cs[100];
    for(int i = 0; i < n; ++i)
    {
        std::cin>>cs[i];
    }

    sort(cs, cs+n, greater<int>());

    int sumBought = 0;
    int currM = 0;
    int maxM = 0;
    for(int i = 0; i < n; ++i)
    {
        sumBought = 0;
        currM = cs[i];
        for(int j = 0; j < n; ++j)
        {
            if(cs[j] >= currM)
            {
                sumBought += currM;
            }
        }
        if(sumBought > maxM)
        {maxM = currM;}
    }
    std::cout<<maxM<<'\n';
}