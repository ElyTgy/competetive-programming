#include<bits/stdc++.h>
using namespace std;


void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   
    int t;
    std::cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
   
    return 0;
}

void solve()
{
    int n;
    int movingAtMax = 1; //first one is always moving at max
    unsigned int arr[10000];
    std::cin>>n;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>arr[i];
    }

    unsigned int fastest = arr[0];
    for(int i = 1; i < n; ++i)
    {
        if(arr[i] <= fastest)
        {
            ++movingAtMax;
            fastest = arr[i];
        }
    }

    std::cout<<movingAtMax;
}
