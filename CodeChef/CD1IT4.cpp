#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ull unsigned long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
    int M,N,P;
    cin>>M>>N>>P;
    ll grid[M][N];
    memset(grid, 0, sizeof(grid));

    for(int i = 0; i < P; ++i){ 
        int blockedi, blockedj;
        cin>>blockedi>>blockedj;
        grid[blockedi-1][blockedj-1] = -1;
    }

    if(grid[0][0] == -1)
    {cout<<0; return;}
    grid[0][0] = 1;
    
    for(int i = 1; i < M; ++i)
    {   if(grid[i][0] == -1){break;}
        grid[i][0] = 1;
    }
    for(int j = 1; j < N; ++j)
    {   if(grid[0][j] == -1){break;}
        grid[0][j] = 1;
    }
    for(int i = 2; i < M; ++i)
    {   
        for(int j = 2; j < N; ++j)
        {   if(grid[i][j] == -1){continue;}
            if(grid[i][j-1] > 0){grid[i][j] = grid[i][j] + grid[i][j-1];}
            if(grid[i-1][j] > 0){grid[i][j] = grid[i][j] + grid[i-1][j];}
        }
    }
    printf("%lld",(grid[M][N] >= 0 ? grid[M][N] : 0));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}