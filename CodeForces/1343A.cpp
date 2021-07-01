#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef unsigned long long ull;


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
    ull n;
    std::cin>>n;
    ull sum=0;
    ull e = 0;
    while(true)
    {
        //std::cout<<"sum: "<<sum<<", e: "<<e<<'\n';
        sum += pow(2, e);
        ++e;
        if(n%sum==0 && sum!=1){break;}
        //std::cout<<(n%sum != 0) && (sum < n);
    }
    std::cout<<n/sum<<'\n';
}  