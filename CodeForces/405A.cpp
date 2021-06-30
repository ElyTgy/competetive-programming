#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;


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
    int arr[100];
    std::cin>>n;
    for(int i = 0; i < n; ++i){std::cin>>arr[i];}
    std::sort(arr, arr+n);
    for(int i = 0; i < n; ++i){std::cout<<arr[i]<<' ';}
} 