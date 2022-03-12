#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef unsigned long long ull;


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
    int n;
    int sum = 0;
    std::string s;
    std::cin>>n;
    std::cin>>s;
    for(int i = 0; i < s.length(); ++i)
    {
        if(!(sum == 0 && s[i] == ')'))
        {
            if(s[i] == '('){sum += 1;}
            else{sum -= 1;}
        }
    }
    std::cout<<abs(sum)<<"\n";

}  