#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
 
 
 
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
    int m;
    std::cin>>n>>m;
    std::unordered_map<int, int> countmap;
    for(int i = 0; i < m; ++i)
    {
        int curr;
        std::cin>>curr;
        std::unordered_map<int, int>::iterator iter = countmap.find(curr);
        if(iter == countmap.end()){countmap[curr] = 1;}
        else{countmap[curr] += 1;}
    }
 
    if((m<n) || countmap.size() < n){std::cout<<0;return;}
 
    int min = 1000000;
    for(auto it = countmap.begin(); it != countmap.end(); ++it)
    {
        if(it->second < min){min = it->second;}
    }
 
    std::cout<<min;
}