#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

const int N = 2*1e5;

void solve();
int main()
{
    int t = 1;
    //std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve(){
    string s;
    cin>>s;
    bool found = false;
    for(int i = 0; i < s.size()-1; ++i)
    {
        if(s[i]=='A' && s[i+1]=='B'){
            for(int j = 0; j < i-2; ++j)
            {
                if(s[j]=='B' && s[j+1]=='A'){found=true; break;}
            }
            if(!found)
            {
                for(int j = i+2; j < s.size()-1; ++j)
                {
                    if(s[j]=='B' && s[j+1]=='A'){found=true; break;}
                }
            }
            break;
        }
    }

    if(!found)
    {
        for(int i = 0; i < s.size()-1; ++i)
        {
            if(s[i]=='B' && s[i+1]=='A'){
                for(int j = 0; j < i-2; ++j)
                {
                    if(s[j]=='A' && s[j+1]=='B'){found=true; break;}
                }
                if(!found)
                {
                    for(int j = i+2; j < s.size()-1; ++j)
                    {
                        if(s[j]=='A' && s[j+1]=='B'){found=true; break;}
                    }
                }
                break;
            }
        }
    }

    if(found){cout<<"YES\n";}
    else{cout<<"NO\n";}
}