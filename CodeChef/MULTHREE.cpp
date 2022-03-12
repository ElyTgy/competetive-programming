#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
    long long k;
    int d0;
    int d1;
    std::cin>>k>>d0>>d1;
    int d0d1Sum = d0 + d1;
    int d0d1Mod = d0d1Sum % 10;
    long long dSum = d0d1Sum + d0d1Mod;
    
    for(long long i = 3; i < k; ++i)
    {
        long long pow_ =  pow(2.0, i-3);
        dSum += ( pow_ * d0d1Sum + pow_ * d0d1Mod ) % 10;
    }
    if(dSum % 3 == 0){std::cout<<"YES\n";}
    else{std::cout<<"NO\n";}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}