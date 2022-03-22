#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1e9 + 7;
const int N = 1e5;
vector<int> graph[N];
bool checked[N]; 
long long routes = 0;
long long badRoutes;
 
void solve();
void dfs(int v);
int pw(int a, int b);
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 
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
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
    {
        int u, v, x;
        cin>>u>>v>>x;
        if(!x){
            graph[v-1].push_back(u-1);
            graph[u-1].push_back(v-1);
        }
    }
 
    routes = pw(n, k);
 
    for(int i = 0; i < n; ++i)
    {
        if(!checked[i])
        {
            dfs(i);
            routes -= pw(badRoutes, k);
            //cout<<">>"<<badRoutes<<'\n';
            routes = routes%M;
            badRoutes = 0;
        }
    }
 
    cout<<((routes%M)+M)%M;
}
 
void dfs(int v)
{
    if(!checked[v]){++badRoutes;}
    checked[v] = true;
    for(int i = 0; i < graph[v].size(); ++i)
    {
        if(!checked[graph[v][i]]){
            dfs(graph[v][i]);
        }
    }
}
 
int pw(int a, int b)
{
    if(b == 0){return 1;}
    long long temp = pw(a, b/2);
    temp = (temp*temp)%M;
    if(b%2){
        temp = (temp*a)%M;
    }
    return temp;
}