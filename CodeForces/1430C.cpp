#include <iostream>
#include <utility>
#include <math.h>
#include <vector>
#define ull unsigned long long
using namespace std;


void solve();

int main()
{
    int t;
    std::cin>>t;

    while(t > 0)
    {
        solve();
        std::cout<<'\n';
        --t;
    }

    return 0;
}


void solve()
{
    int n;
    std::cin>>n;
    std::vector<int> arr;
    std::vector<std::pair<int, int> > pairs;
    for(int i = 1; i <= n;++i)
    {
        arr.push_back(i);
    }
    while(arr.size() != 1){
        float top1 = arr.back();
        arr.pop_back();
        float top2 = arr.back();
        arr.pop_back();
        pairs.push_back(std::make_pair((int)top1, (int)top2));
        arr.push_back((int)ceil((top1+top2)/2));
    }

    std::cout<<arr[0]<<"\n";

    for(int i = 0; i < pairs.size(); ++i)
    {
        std::cout<<pairs[i].first<<" "<<pairs[i].second<<"\n";
    }
}
