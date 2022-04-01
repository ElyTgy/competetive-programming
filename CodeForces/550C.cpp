#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;


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
    int res = -1;
    cin>>s;
    for(int i = 0; i < s.size();++i){
        int a = int(s[i]-'0');
        if(a % 8 == 0){
            res = a;
        }
        for(int j = i+1; j < s.size(); ++j){
            int b = int(s[j]-'0');
            if((a*10 + b) % 8 == 0)
            {
                res = a*10 + b;
            }
            for(int z = j+1; z < s.size(); ++z)
            {
                int c = int(s[z]-'0');
                if((a*100 + b*10 + c) % 8 == 0)
                {
                    res = a*100 + b*10 + c;
                }
            }
        }
    }
    if(res == -1){cout<<"NO";}
    else{cout<<"YES\n"<<res;}
} 