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
    int n;
    std::cin>>n;
    string str;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>str;
        if (str.length()  > 10)
        {
            std::cout<<str[0]<<str.length()-2<<str[str.length()-1]<<'\n';
        }
        else{
            std::cout<<str<<'\n';
        }
    }

}