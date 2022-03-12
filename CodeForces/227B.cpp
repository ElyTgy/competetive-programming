#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <vector>
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
    std::cin>>n;
    std::vector<int> nums;
    nums.reserve(n);
    int m;
    std::cin>>m;
    std::vector<int> queries;
    queries.reserve(m);

    for(int i = 0; i < n; ++i)
    {
        int temp;
        std::cin>>temp;
        nums.push_back(temp);
    }
    for(int i = 0; i < m;++i)
    {
        int temp;
        std::cin>>temp;
        queries.push_back(temp);
    }

    int vcount = 0;
    int pcount = 0;

    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(queries[i] == nums[j])
            {
                ++vcount;
                break;
            }
            else{++vcount;}
        }
        
    }

    for(int i = 0; i < m; ++i)
    {
        for(int j = n-1;j >= 0;--j)
        {
            if(queries[i] == nums[j])
            {
                ++pcount;
                break;
            }
            else{++pcount;}
        }
    }

    std::cout<<pcount<<" "<<vcount;

}