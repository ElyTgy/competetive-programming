#include <iostream>
#include <string>
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
    ull n;
    ull a[100000];

    std::cin>>n;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>a[i];
    }

    int maxLen=1;
    int currlen=1;
    for(int i = 1; i < n; ++i)
    {
        if(a[i] >= a[i-1]){++currlen;}
        else{
            if(currlen > maxLen){maxLen=currlen;}
            currlen=1;
        }
    }
    if(currlen > maxLen){maxLen=currlen;}
    std::cout<<maxLen;
} 