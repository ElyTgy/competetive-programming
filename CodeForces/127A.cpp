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
    int k;
    int coords[100][2];
    
    std::cin>>n;
    std::cin>>k;

    for(int i = 0; i < n; ++i)
    {
        std::cin>>coords[i][0];
        std::cin>>coords[i][1];
    }

    double sumdistsmm = 0;
    for(int i = 0; i < n-1; ++i)
    {
        int xdist = abs(coords[i][0] - coords[i+1][0]);
        int ydist = abs(coords[i][1] - coords[i+1][1]);

        sumdistsmm += sqrt(pow(xdist, 2) + pow(ydist, 2));
    }

    std::cout<<std::fixed<<std::setprecision(9)<<(sumdistsmm*k) / 50.0<<'\n';

}