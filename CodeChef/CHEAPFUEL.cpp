#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ull unsigned long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
    int x,y,a,b,k;
    std::cin>>x>>y>>a>>b>>k;
    int petrol = x + a*k;
    int diesel = y + b*k;
    if(petrol < diesel){std::cout<<"PETROL\n";}
    else if (petrol > diesel){std::cout<<"DIESEL\n";}
    else{std::cout<<"SAME PRICE\n";}
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