#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
typedef unsigned long long ull;

vector<int> hotels;
vector<int> maxPath = {};

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
    unordered_map<int, int> graph;
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
        int v = 0;
        cin >> v;
        if (v != 0)
        {
            graph[i] = v;
        }
    }
    for (int i = 0; i < hotels.size(); ++i)
    {
        vector<int> currPath;
        int currV = hotels[i];
        while (graph.find(currV) != graph.end())
        {
            currPath.push_back(currV);
            currV = graph[currV];
        }
        currPath.push_back(currV);
        if (currPath.size() > maxPath.size()) { maxPath = currPath; }
    }

    std::cout << maxPath.size()<<'\n';
    for (int i = maxPath.size()-1; i >= 0; --i)
    {
        std::cout << maxPath[i] << " " <<;
    }

}