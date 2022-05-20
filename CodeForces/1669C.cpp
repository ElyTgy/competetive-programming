#include <iostream>

const int N = 1e4;
void solve();
int arr[N];

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
    int n;
    std::cin>>n;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>arr[i];
    }

    bool EvensAreEven = false;
    if(arr[0] % 2 == 0){EvensAreEven=true;}
    for(int i = 2; i < n; i+=2)
    {
        if(EvensAreEven && arr[i]%2!=0){std::cout<<"NO\n";return;}
        if(!EvensAreEven && arr[i]%2==0){std::cout<<"NO\n";return;}
    }
    
    bool oddsAreEven = false;
    if(arr[1] % 2 == 0){oddsAreEven=true;}
    for(int i = 3; i < n; i+=2)
    {
        if(oddsAreEven && arr[i]%2!=0){std::cout<<"NO\n";return;}
        if(!oddsAreEven && arr[i]%2==0){std::cout<<"NO\n";return;}
    }

    std::cout<<"YES\n";
}
