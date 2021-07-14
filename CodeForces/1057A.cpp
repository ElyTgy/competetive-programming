#include <iostream>
#include <string>
#include <unordered_map>
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
    }
    return 0;
}

void solve()
{
    int n;
    std::cin >> n;
    int rs[200000 ];
    for (int i = 1; i <= n - 1; ++i)
    {
        int temp;
        std::cin >> temp;
        rs[i] = temp - 1;
    }
    rs[0] = -1;

    int ans[200000 ];
    int nextIndex = n-1;
    ans[0] = nextIndex;
    int ansLength = 1;
    while (nextIndex != 0)
    {
        nextIndex = rs[nextIndex];
        ans[ansLength] = nextIndex;
        ++ansLength;
    }

    for (int i = ansLength-1; i >=  0; --i)
    {
        std::cout << ans[i]+1 << ' ';
    }

}