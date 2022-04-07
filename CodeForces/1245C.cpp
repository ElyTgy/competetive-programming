#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

const int N = 1e5;
const ull mod = 1e9 + 7;
std::vector<ull> v;

void solve();
ull power(ull x, ull n);
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
    bool cont = true;
    std::string s;
    std::cin>>s;
    ull len = 1;
    ull res = 1;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'm' || s[i] == 'w'){std::cout<<0;cont = false;break;}
        if((s[i] == s[i+1]) && (s[i] == 'n' || s[i] == 'u')){++len;}
        else if(len >= 2){v.push_back((power(2, len-2)+1));len = 1;}
        else{len = 1;}
    }
    if(cont){
        for(int i = 0; i < v.size(); ++i)
        {
            res = (res * v[i]);
        }
        std::cout<<res;
    }
}

ull power(ull x, ull n)
{
    ull m;
    if (n == 0) return 1;
    if (n % 2 == 0) {
        m = (power(x, n / 2)) ;
        return (m * m) ;
    } else return (x * power(x, n - 1));
}