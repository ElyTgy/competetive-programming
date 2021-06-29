#include <iostream>
using namespace std;



void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    std::cin>>t;
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
    int zeroCount = 0;
    int oneCount = 0;
    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] == '0'){++zeroCount;}
        else{++oneCount;}
    }

    if(min(zeroCount, oneCount) % 2 != 0){std::cout<<"DA\n";}
    else{std::cout<<"NET\n";}

}