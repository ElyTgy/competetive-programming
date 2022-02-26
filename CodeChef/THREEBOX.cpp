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
    int A;
    int B;
    int C;
    int D;
    std::cin>>A>>B>>C>>D;
    if(A+B+C <= D){std::cout<<"1\n";}
    else if((A+B > D)){std::cout<<"3\n";}
    else{std::cout<<"2\n";}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
     cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}