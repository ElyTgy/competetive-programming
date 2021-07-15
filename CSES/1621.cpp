#include <iostream>
#include <set>
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
        //  cout<<"\n";
    }

    return 0;
}

void solve()
{
    int n;
    std::cin>>n;
    std::set<int>s;
    for(int i = 0; i < n; ++i)
    {
        int t;
        std::cin>>t;
        s.insert(t);
    }

    std::cout<<s.size();
}
