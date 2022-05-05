#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 1;
int arr[N];
void solve();

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

void solve()
{
    int n, k;
    std::cin>>n>>k;
    for(int i=0; i<n; ++i){
        std::cin>>arr[i];
    }
    sort(arr, arr+n);
    
    /*for(int i=0; i<n; ++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<'\n';*/
    
    int middlei = (n/2);
    for(int i=middlei+1; i<n; ++i){
        int diff = arr[i]-arr[i-1];
        while(diff>0 && k-(i-middlei)>=0)
        {
            k -= (i-middlei);
            --diff;
            ++arr[middlei];
        }
    }

    if(k>0){
        int countWithMed = n-middlei;
        if(k >= countWithMed)
        {
            arr[middlei] += (int)(k/countWithMed);
        }
    }
    std::cout<<arr[middlei];
}