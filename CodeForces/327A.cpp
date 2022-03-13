#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

constexpr int N = 101;

int dp[N];

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
    dp[0] = 0;
    int n;
    std::cin>>n;
    int num;
    std::cin>>num;
    if(num == 0){dp[1] = 0;}
    else{dp[1] = 1;}
    for(int i = 2; i <= n; ++i)
    {
        int num;
        std::cin>>num;
        if(num == 0){dp[i] = dp[i-1];}
        else{dp[i] = dp[i-1]+1;}
    }

    //for (int i = 1; i <= n; ++i)
    //{
    //    std::cout<<dp[i]<<" ";
    //}
    //std::cout<<'\n';


    int max = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = i; j <= n; ++j)
        {
            //std::cout<<"i: "<<i<<'\n';
            //std::cout<<"j: "<<j<<'\n';
            //std::cout<<"before: "<<dp[i-1]<<'\n';
            //std::cout<<"dp[j]-dp[i]"<<abs(dp[j]-dp[i])<<'\n';
            //std::cout<<"i to j: "<<abs((j-i+1) - abs(dp[j]-dp[i-1]))<<'\n';
            //std::cout<<"after: "<<dp[n]-dp[j]<<'\n';
            //std::cout<<"======="<<'\n';
            int curr = dp[i-1]+abs((j-i+1) - abs(dp[j]-dp[i-1]))+dp[n]-dp[j];
            if(curr > max){max = curr;}
        }
    }

    //if(n == 1 && dp[1]==0){std::cout<<1;}
    //else{std::cout<<max;}
    std::cout<<max;
}
