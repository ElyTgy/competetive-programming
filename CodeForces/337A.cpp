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
    int ps[1000];
    std::cin>>n>>m;
    for(int i = 0; i < m; ++i){std::cin>>ps[i];}

    sort(ps, ps+m);
    int i = 0;
    unsigned int min = -1;
    while(i+n <= m)
    {
        if(ps[i+n-1]-ps[i] < min){min=ps[i+n-1]-ps[i];}
        ++i;
    }
    std::cout<<min;
}  