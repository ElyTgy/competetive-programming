#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 1;
int n;
int arr[N];
int arrb[N];
void solve();
void mergeSort(int l, int r);

int all[N];

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
    int sum = 0;
    std::cin>>n;
    for(int i=0; i<n; ++i){std::cin>>arr[i];}
    mergeSort(0, n);
    for(int i=0; i<n-1; i+=2){
        sum += arr[i+1] - arr[i];
    }
    std::cout<<sum;
}

void mergeSort(int l, int r)
{
    if(r-1 == l)
    {
        return;
    }

    mergeSort(l, (l+r)/2);
    mergeSort(((l+r)/2), r);
    
    
    int bp=l;
    int mid = (l+r)/2;
    int lp=l; int rp=mid;
    while(lp < mid && rp < r){
        if(arr[lp] < arr[rp]){
            arrb[bp] = arr[lp];
            ++bp;
            ++lp;
        }
        else{
            arrb[bp] = arr[rp];
            ++bp;
            ++rp;
        }
    }
    while(lp<mid){
        arrb[bp] = arr[lp];
        ++bp;
        ++lp;
    }
    while(rp<r){
        arrb[bp] = arr[rp];
        ++bp;
        ++rp;
    }
    //std::copy(arrb+l, arrb+r, arr);
    for(int i = l; i < r; ++i){
        arr[i] = arrb[i];
    }
}