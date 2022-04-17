#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

const int N = 1e5;
const ll mod = 1e9 + 7;
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
    std::vector<ll> fib;
    fib.push_back(1);
    fib.push_back(2);
    for(int i = 2; i < s.size(); ++i)
    {
        fib.push_back((fib[i-1] + fib[i-2])%mod);
    }
    ull len = 1;
    ull res = 1;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'm' || s[i] == 'w'){std::cout<<0;cont = false;break;}
        if((s[i] == s[i+1]) && (s[i] == 'n' || s[i] == 'u')){++len;}
        else if(len >= 2){v.push_back(fib[len-1]);len = 1;}
        else{len = 1;}
    }
    if(cont){
        for(int i = 0; i < v.size(); ++i)
        {
            res = (res * v[i])%mod;
        }
        std::cout<<res;
    }
}

ull power(ull x, ull n)
{
    ull m;
    if (n == 0) return 1;
    if (n % 2 == 0) {
        m = (power(x, n / 2)) % mod;
        return (m * m) ;
    } else return (x * power(x, n - 1)) % mod;
}