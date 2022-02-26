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
    int ind = 0;
    int eng = 0;
    for(int i = 0; i < 5; ++i){
        int temp;
        std::cin>>temp;
        if(temp == 1){++ind;}
        else if(temp == 2){++eng;}
    }
    if(ind > eng){std::cout<<"INDIA\n";}
    else if(ind < eng){std::cout<<"ENGLAND\n";}
    else{std::cout<<"DRAW\n";}
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