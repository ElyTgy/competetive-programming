#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ull unsigned long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
    ll x, y;
    std::cin>>x>>y;
    if(x == 0){if(y % 2 != 0){std::cout<<"NO\n";}else{std::cout<<"YES\n";}return;}
    if(y == 0){if(x % 2 != 0){std::cout<<"NO\n";}else{std::cout<<"YES\n";}return;}
    if((x+2*y)%2 == 0){std::cout<<"YES\n";}else{std::cout<<"NO\n";}
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