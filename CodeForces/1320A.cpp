#include <bits/stdc++.h>
typedef unsigned long long ull;


const int N = 2*10e4;
std::map<int, ull> map;
ull b[N+1];

void solve();
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
    int n;
    std::cin>>n;
    ull max = 0;
    for(int i = 1; i <= n; ++i)
    {
        int temp;
        std::cin>>temp;
        b[i] = temp;
    }
    for(int i = 1; i <= n; ++i)
    {
        int diff = i - b[i];
        if(map.find(diff) != map.end()){map[diff] += b[i];}
        else{map[diff] = b[i];}
        if(map[diff] > max){max = map[diff];}
    }
    std::cout<<max;
}