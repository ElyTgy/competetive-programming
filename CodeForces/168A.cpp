#include <iostream>
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
    float n;
    float x;
    float y;
    std::cin>>n>>x>>y;
    float minXNeeded = y/100.0f*n;
    std::cout<<"First: "<<minXNeeded<<"\n";
    std::cout<<"First int: "<<static_cast<int>(minXNeeded)<<"\n";
    if(int(y*n) % 100 != 0){minXNeeded+=1;}
    std::cout<<"After: "<<minXNeeded<<"\n";
    if(int(x) >= int(minXNeeded)){std::cout<<0;}
    else{std::cout<<int(minXNeeded)-int(x);}
}
