#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;


unordered_map<long long,long long> csub;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   

    int t;
    std::cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
   
    return 0;
}

void solve()
{
    long long count=0;
    long long oneCount=0;
    long long n;
    string s;
    
    cin>>n;
    cin>>s;

    for(long long i = 0; i < n; ++i)
    {
        if(s[i] == '1'){++oneCount;}    
    }

    if(csub.find(oneCount) != csub.end())
    {
        std::cout<<csub[oneCount];
        return;
    }

    for(long long i = oneCount-1; i > 0; --i)
    {
        count += i;
    }

    csub[oneCount] = count + oneCount;
    
    cout<<count + oneCount;
}
