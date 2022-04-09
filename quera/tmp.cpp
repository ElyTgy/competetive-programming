#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
typedef unsigned long long ull;

const int N = 1e6;
int arr[N];
int maxL[N];
int maxR[N];
int ans = 0;

void solve();
int maxArr(int l, int r);
int main()
{
    int t = 1;
    //std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve(){
    int n;
    std::cin>>n;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>arr[i];
    }

    maxL[0] = arr[0];
    for(int i = 1; i < n; ++i)
    {
        maxL[i] = std::max(maxL[i-1], arr[i]);
    }
    maxR[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; --i)
    {
        maxR[i] = std::max(maxR[i+1], arr[i]);
    }
 
    for(int i = 1; i < n-1; ++i)
    {
        //std::cout<<i<<' '<< maxL[i-1]<<' '<<maxR[i+1]<<'\n';
        ans += std::max((std::min(maxL[i-1], maxR[i+1]) - arr[i]), 0);
    }
    std::cout<<ans;
}