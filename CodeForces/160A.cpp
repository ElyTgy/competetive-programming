#include <iostream>
#include <algorithm>
#include <string>
//#define DEBUG
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
    int n = 0;
    std::cin>>n;
    int l[100];
    for(int i = 0; i < n; ++i)
    {
        std::cin>>l[i];
    }

    sort(l, l+n, greater<int>());

    int ans=0;
    int sumAll=0;
    int sumSubSet=0;
    
    for(int i = 0; i < n; ++i)
    {
        sumAll+=l[i];
    }

    for(int i = 0; i < n; ++i)
    {
        //std::cout<<"Iteration number: "<<i<<'\n';
        sumSubSet+=l[i];
        sumAll-=l[i];
        ++ans;
        //std::cout<<"my subset sum: "<<sumSubSet<<'\n';
        //std::cout<<"other subset sum: "<<sumAll<<'\n';
        //std::cout<<"answer: "<<ans<<'\n';
        if(sumSubSet > sumAll)
        {
            //std::cout<<"my sum is bigger: "<<i<<'\n';
            std::cout<<ans<<'\n';
            return;
        }
    }
    //std::cout<<"out of loop"<<'\n';
    std::cout<<ans<<'\n';
}