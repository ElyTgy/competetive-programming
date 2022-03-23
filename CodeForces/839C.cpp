#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

const int N = 100000;

std::vector<int> graph[N];
int n;

void solve();
long double dfs(int v, int parent);
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
    cin>>n;
    for(int i = 1; i < n; ++i){
        int v,u;
        cin>>v>>u;
        --v;--u;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    cout<<fixed<<setprecision(7)<<dfs(0,-1)<<'\n';
}

long double dfs(int v, int parent)
{
    long double sum = 0;
    for(auto u : graph[v])
		if(u != parent)
			sum += dfs(u, v) + 1;
	return sum ? sum / (graph[v].size() - (parent != -1)) : 0;
}