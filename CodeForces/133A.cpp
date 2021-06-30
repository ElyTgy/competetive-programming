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
    string instr;
    std::cin>>instr;

    char chars[] = {'H', 'Q', '9'};
    for(int i = 0; i < instr.length(); ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            if(instr[i] == chars[j])
            {
                std::cout<<"YES\n";
                return;
            }
        }
    }
    std::cout<<"NO\n";
}