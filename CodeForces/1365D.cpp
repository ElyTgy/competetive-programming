#include <iostream>
#include <vector>
typedef long long ll;
typedef unsigned long long ull;

const int N = 50;
char grid[N][N];
bool checked[N][N];

void solve();
void dfs(int x, int y, int n, int m);
int main()
{
    int t = 1;
    std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}


void solve(){
    for(int i = 0; i < N; ++i)
    {  
        for(int j = 0; j < N; ++j)
        {
            grid[i][j] = ' ';
            checked[i][j] = false;
        }
    }
    
    int n, m;
    std::cin>>n>>m;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            char tmp;
            std::cin>>tmp;
            grid[i][j] = tmp;
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(grid[i][j] == 'B'){
                if(i-1 >= 0)
                {
                    if(grid[i-1][j] == 'G'){std::cout<<"NO\n"; return;}
                    if(grid[i-1][j] == '.'){grid[i-1][j] = '#';}
                }
                if(i+1 < n)
                {
                    if(grid[i+1][j] == 'G'){std::cout<<"NO\n"; return;}
                    if(grid[i+1][j] == '.'){grid[i+1][j] = '#';}
                }
                if(j-1 >= 0)
                {
                    if(grid[i][j-1] == 'G'){std::cout<<"NO\n"; return;}
                    if(grid[i][j-1] == '.'){grid[i][j-1] = '#';}
                }
                if(j+1 < m)
                {
                    if(grid[i][j+1] == 'G'){std::cout<<"NO\n"; return;}
                    if(grid[i][j+1] == '.'){grid[i][j+1] = '#';}
                }
            }
        }
    }
    if(grid[n-1][m-1] != '#'){
        dfs(n-1, m-1, n, m);
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(grid[i][j] == 'G'){
                if(checked[i][j] == false){std::cout<<"NO\n"; return;}
            }
        }
    }

    std::cout<<"YES\n";return;
}

void dfs(int x, int y, int n, int m)
{
    checked[x][y] = true;
    if(x-1 >= 0 && grid[x-1][y] != '#' && checked[x-1][y] == false)
    {dfs(x-1, y, n, m);}
    if(y-1 >= 0 && grid[x][y-1] != '#' && checked[x][y-1] == false)
    {dfs(x, y-1, n, m);}
    if(y+1 < m && grid[x][y+1] != '#' && checked[x][y+1] == false)
    {dfs(x, y+1, n, m);}
    if(x+1 < n && grid[x+1][y] != '#' && checked[x+1][y] == false)
    {dfs(x+1, y, n, m);}
}