#include <vector>
#include <iostream>
using namespace std;
#define ll long long
 
const int N =  200002;
 
std::vector<int> adj[N];
bool checked[N];
std::vector<bool> components;
int cycles = 0;
 
void Solve();
void isComponentCycle(int node, int componentIndex);
 
int main()
{
 
    int t = 1;
    //std::cin>>t;
    while (t--)
    {
        Solve();
        //  cout<<"\n";
    }
 
    return 0;
}
 
void Solve()
{
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int v1, v2;
        std::cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    for (int i = 0; i < N; ++i)
    {
        if (!checked[i] && adj[i].size() != 0)
        {
            components.push_back(true);
            isComponentCycle(i, components.size()-1);
        }
    }
    for(int i = 0; i < components.size(); ++i)
    {
        if (components[i]){++cycles;}
    }
    std::cout<<cycles;
}
 
void isComponentCycle(int node, int componentIndex) {
    if(adj[node].size() != 2){components[componentIndex] = false;}
    checked[node] = true;
    for (int i = 0; i < adj[node].size(); ++i)
    {
        if(!checked[adj[node][i]]){
            isComponentCycle(adj[node][i], componentIndex);
        }
    }
}