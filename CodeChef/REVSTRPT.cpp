#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    int n;
    std::cin>>n;
    int j = n-1;
    int z = 1;

    for(int i = 0; i < n; ++i)
    {
        for(int jc = j; jc > 0; --jc)
        {
            std::cout<<" ";
        }
        --j;
        for(int zc = z; zc > 0; --zc)
        {
            std::cout<<"*";
        }
        ++z;
        std::cout<<"\n";

    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}