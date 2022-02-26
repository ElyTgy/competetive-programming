#include<bits/stdc++.h>
using namespace std;


void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   
    int t = 1;
    //std::cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
   
    return 0;
}

void solve()
{
    int n;
    std::cin >> n;
    vector<long long> prices;
    for (int i = 0; i < n;++i) { long long temp; std:cin >> temp; prices.push_back(temp); }
    std::sort(prices.begin(), prices.end());
    long long currMax = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        int count = 0;
        for (int j = i - 1; j >= 0; --j) { if (prices[i] == prices[j]) { ++count; } else { break; } }
        count += n - i;
        if (prices[i] * count > currMax) { currMax = prices[i] * count; }
    }
    std::cout << currMax;
}

