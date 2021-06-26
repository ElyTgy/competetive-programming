#include <iostream>
using namespace std;

//solving time: 240 - k


void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   
    int t = 1;
    //std::cin>>t;
    while(t--)
    {
        solve();
      //  cout<<"\n";
    }
   
    return 0;
}

void solve()
{
    int n, k;
    std::cin>>n;
    std::cin>>k;
    int p = 0;
    int solveTime = 240 - k;
    for(int i = 1; i <= n; ++i)
    {
        if(solveTime - 5*i >= 0)
        {
            solveTime -= 5*i;
            ++p;
        }
    }
    std::cout<<p;
}
