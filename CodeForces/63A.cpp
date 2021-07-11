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


struct sth
{
    int lastindeces[3];
    string data[3][100];
    string capitain = "";   
};

void solve()
{
    int n;
    std::cin>>n;
    sth members;

    string tempname;
    string tempstatus;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>tempname;
        std::cin>>tempstatus;
        if(tempstatus=="captain"){members.capitain=tempname;}
        else if(tempstatus=="rat"){members.data[0][members.lastindeces[0]] = tempname; ++members.lastindeces[0];}
        else if(tempstatus=="woman" || tempstatus=="child"){members.data[1][members.lastindeces[1]] = tempname; ++members.lastindeces[1];}
        else{members.data[2][members.lastindeces[2]] = tempname; ++members.lastindeces[2];}
    }

    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < members.lastindeces[i]; ++j)
        {
            std::cout<<members.data[i][j]<<'\n';
        }
    }

    if(!members.capitain.empty()){
    std::cout<<members.capitain<<'\n';}

}