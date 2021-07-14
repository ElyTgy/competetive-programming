#include <iostream>
#include <utility>
#include <algorithm>
#define ll long long
using namespace std;



int main()
{
    int n ;
    std::cin>>n;
    std::pair<ll, ll> dates[2000];
    
    for(int i = 0; i < n; ++i)
    {
        int f;
        int s;
        std::cin>>f>>s;
        dates[i] = std::make_pair(f,s);
    }

    std::sort(dates, dates+n);
    int last = -1;
    for(int i = 0; i < n;++i)
    {
        if(dates[i].second >= last){last = dates[i].second;}
        else{last = dates[i].first;}
    }

    std::cout<<last;
}