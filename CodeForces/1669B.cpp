#include <bits/stdc++.h>

const int N = 2*1e5;
void solve();

int main()
{
    int t = 1;
   std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve() {
    int arr[N];
    std::vector<int> res;
    int n;
    std::cin>>n;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>arr[i];
    }
    std::sort(arr, arr+n, std::greater<int>());
    int currCount = 1;
    for(int i = 1; i < n; ++i)
    {
        if(arr[i-1] == arr[i]){currCount+=1;}
        else{
            if(currCount >= 3){res.push_back(arr[i-1]);}
            currCount = 1;
        }
        if(i == n-1){if(currCount >= 3){res.push_back(arr[i-1]);}}
    }
    if(res.size() == 0){std::cout<<"-1\n";}
    else{std::cout<<res[0]<<'\n';}
}
