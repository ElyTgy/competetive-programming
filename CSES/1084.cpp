#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long


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
    ll n;
    ll m;
    ll k;
    std::cin >> n >> m >> k;

    ll* desiredSizes = new ll[n];
    for (int i = 0; i < n; ++i) { std::cin >> desiredSizes[i]; }

    ll* sizes = new ll[m];
    for (int i = 0; i < m; ++i) { std::cin >> sizes[i]; }

    sort(sizes, sizes + m);
    sort(desiredSizes, desiredSizes + n);

    int filledCount = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if ((sizes[j] >= desiredSizes[i] - k && sizes[j] <= desiredSizes[i] + k) && sizes[j] != -1)
            {
                ++filledCount;
                sizes[j] = -1;
                break;
            }
        }
    }
    std::cout << filledCount;
}