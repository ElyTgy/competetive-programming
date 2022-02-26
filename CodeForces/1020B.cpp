#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iterator>
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
    int p[1000];
    for(int i = 0; i < n; ++i)
    {
        int temp;
        std::cin>>temp;
        p[i] = temp-1;
    }

    int pCopy[1000];

    for(int i = 0; i < n; ++i)
    {
        int currIndex = i;
        for(int j = 0; j < n; ++j){pCopy[j] = p[j];}
        while(true)
        {
            if(pCopy[currIndex] == -1){std::cout<<currIndex+1<<" ";break;}
            int temp = currIndex;
            currIndex = pCopy[currIndex];
            pCopy[temp] = -1;
        }
    }
}