#include <vector>
#include <set>
#include <iostream>
#include <map>
typedef long long ll;
typedef unsigned long long ull;

const int N = 5 * 100000;
std::vector<int> groups[N];
std::vector<int> graph[N];
std::set<int> ppl;
std::map<int, int> res;
bool visited[N];
int currCount = 0;

void solve();
void dfs(int node);

ull power(ull x, ull n);
int main()
{
    int t = 1;
    //std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve() {
    int n, m;
    std::cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int c;
        std::cin >> c;
        for (int j = 1; j <= c; ++j) {
            int tmp;
            std::cin >> tmp;
            groups[i].push_back(tmp);
        }
    }
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 0; j < groups[i].size(); ++j) {
            std::vector<int> copy = groups[i];
            copy.erase(copy.begin() + j);
            graph[groups[i][j]].insert(graph[groups[i][j]].end(), copy.begin(), copy.end());
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        currCount = 0;
        for (int i = 1; i <= n; ++i) { visited[i] = false; }
        dfs(i);
        std::cout << currCount << " ";
    }
}

void dfs(int node)
{
    ++currCount;
    visited[node] = true;
    for (int i = 0; i < graph[node].size(); ++i)
    {
        if (!visited[graph[node][i]]) {
            dfs(graph[node][i]);
        }
    }
}