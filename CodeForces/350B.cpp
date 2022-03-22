#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
typedef unsigned long long ull;

const long long N = 100000;

vector<int> hotels;
vector<int> maxPath = {};
vector<int> graph[N];
vector<int> graphNew[N];

void solve();
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
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int tempType;
        cin >> tempType;
        if (tempType == 1) { hotels.push_back(i); }
    }
    for (int i = 1; i <= n; ++i)
    {
        int v;
        cin >> v;
        if (v != 0)
        {
            graph[v].push_back(i);
        }
    }

    for (int i = 1; i < n; ++i)
    {
        for(int j = 0; j < graph[i].size(); ++j)
        {
            graphNew[graph[i][j]] = {i};
        }
    }

    for (int i = 0; i < hotels.size(); ++i)
    {
        vector<int> currPath;
        int currV = hotels[i];
        while (graphNew[currV].size() != 0 && graph[graphNew[currV][0]].size() == 1)
        {
            currPath.push_back(currV);
            currV = graphNew[currV][0];
        }
        currPath.push_back(currV);
        if (currPath.size() > maxPath.size()) { maxPath = currPath; }
    }

    std::cout << maxPath.size() << '\n';
    for (int i = maxPath.size() - 1; i >= 0; --i)
    {
        std::cout << maxPath[i] << " ";
    }
}