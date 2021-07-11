#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>
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
    long long arr[100000];
    long long n;
    long long h;
    
    long long currindex = 0;
    bool currHolds = false;

    std::cin>>n>>h;
    for(long long i = 0; i < n; ++i)
    {
        std::cin>>arr[i];
    }

    int cmd;
    do
    {
        std::cin>>cmd;
        switch (cmd)
        {
            case 1:
                if(currindex!=0){--currindex;}
                break;
            case 2:
                if(currindex!=n-1){++currindex;}
                break;
            case 3:
                if(!currHolds && arr[currindex] != 0){currHolds=true;--arr[currindex];}
                break;
            case 4:
                if(currHolds && arr[currindex] != h){currHolds=false;++arr[currindex];}
                break;
            default:
                break;
        }

    }while(cmd!=0);
    
    for(int i = 0; i < n; ++i)
    {
        std::cout<<arr[i]<<" ";
    }

}