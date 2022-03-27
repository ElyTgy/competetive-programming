#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


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
    vector<ll> a;
    map<ll, int> _map;
    int n;
    int cntbad = 0;
    int curr;
    unsigned int res = -1;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        ll temp;
        cin>>temp;
        a.push_back(temp);
        if(_map.find(temp) != _map.end()){
            if(_map[temp] == 1){++cntbad;}
            _map[temp] += 1;
        }
        else{
            _map[temp] = 1;
        }
    }
    if(cntbad == 0 || a.size() == 1){std::cout<<0;}
    else{
        for(int i = 0; i < a.size(); ++i)
        {
            ll l = a[i];
            map<ll, int> mapc = _map;
            int cntbadc = cntbad;
            for(int j = i; j < a.size(); ++j)
            {
                ll r = a[j];
                mapc[r] -= 1;
                if(mapc[r] == 1){--cntbadc;}
                if(cntbadc == 0){if((j+1)-(i+1)+1 < res){res = (j+1)-(i+1)+1;}}
                
                /*cout<<"===="<<'\n';
                cout<<"i="<<i<<", "<<"j="<<j<<'\n';
                cout<<"l="<<l<<", r="<<r<<'\n';
                cout<<"cntbad: "<<cntbadc<<'\n';
                cout<<"temp: "<<(j+1)-(i+1)+1<<'\n';*/
            }    
        }
        cout<<res;
    }
}