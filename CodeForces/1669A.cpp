#include <iostream>

const int N = 1e4;
void solve();
int arr[N];

int main()
{
    int t = 1;
   // std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve() {
    int n;
    std::cin>>n;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>arr[i];
    }
    for(int i = 0; i < n; ++i)
    {
        if(arr[i]<=1399){std::cout<<"Division 4";}
        else if(arr[i]>=1400 && arr[i]<=1599){std::cout<<"Division 3";}
        else if(arr[i]>=1600 && arr[i]<=1899){std::cout<<"Division 2";}
        else{std::cout<<"Division 1";}
        std::cout<<'\n';
    }
}
