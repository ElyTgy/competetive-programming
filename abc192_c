#include <iostream>
#include <string>
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
    string s;
    std::cin>>s;

    int consecutive = 0;
    for(int i = 1; i < s.length(); ++i)
    {
        if(s[i-1] == s[i]){++consecutive;}
        else{consecutive=0;}
        if(consecutive >= 6){std::cout<<"YES\n";return;}
    }
    std::cout<<"NO\n";
}