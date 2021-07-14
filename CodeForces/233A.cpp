#include <iostream>
#include <cmath>
#include <iomanip>
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
    int n;
    std::cin>>n;
    if (n % 2 != 0){std::cout<<-1;return;}
    
    for(int i = 1; i < n; i+=2)
    {
        std::cout<<i+1<<" "<<i<<" ";
    }

}