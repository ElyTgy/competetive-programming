#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod  = 1e9+7;

void solve();
ll power(ll b, ll e);
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

void solve()
{
    string s;
    cin>>s;
    ll aCurrCount = 0;
    ll bCount = 0;
    ll bEndCount = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == 'a'){++aCurrCount;}
        else if(s[i] == 'b'){bEndCount=(bEndCount+power(2, aCurrCount))%mod; ++bCount;}
        //std::cout<<aCurrCount<<" "<<bCount<<" "<<bEndCount<<'\n';
    }
    std::cout<<bEndCount - bCount;;
}

ll power(ll b, ll e)
{
    //std::cout<<b<<" "<<e<<'\n';
    if(e==0){return 1;}
    ll tmp = power(b, e/2);
    tmp = (tmp*tmp)%mod;
    if(e%2==1){tmp=(tmp*b)%mod;}
    //std::cout<<tmp<<'\n';
    return tmp;
}