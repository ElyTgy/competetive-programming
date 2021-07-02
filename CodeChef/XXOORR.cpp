#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

#define ar array
#define ll long long
#define ull unsigned long long

//const int MAX_N = 1e5 + 1;
//const ll MOD = 1e9 + 7;
//const ll INF = 1e9;



void solve(vector<ull>& vec)
{
    int n, k;
    std::cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> vec[i];
    }

    ull ans = 0;
    int oddCount = 0;
    int zeroCount = 0;
    for (int i = 0; i < n; ++i)
    {
        //if number is odd
        if (vec[i] % 2 != 0)
        {
            ++oddCount;
            vec[i] = vec[i] ^ 1;
        }
        else if(vec[i] == 0){++zeroCount;}
    }

    if(zeroCount == n){std::cout<<0;return;}

    if (oddCount > k)
    {
        ans = oddCount / k;
        if (oddCount % k != 0) { ++ans; }
    }
    else if(oddCount != 0){ ans++; }


    int changedCount = 0;
    ull p = 0;
    while (zeroCount != n)
    {
        changedCount = 0;
        zeroCount = 0;
        for (int i = 0; i < n; ++i)
        {
            if (vec[i] == 0) { ++zeroCount; continue; }
            if ((vec[i] ^ static_cast<ull>(pow(2, p))) 
                < vec[i])
            {
                vec[i] = vec[i] ^ static_cast<ull>(pow(2, p));
                ++changedCount;
            }
            if (vec[i] == 0) { ++zeroCount;}
        }

        if (changedCount > k)
        {
            ans += changedCount / k;
            if (changedCount % k != 0) { ++ans; }
        }
        else if(changedCount != 0){ ++ans; }
        
        ++p;
    }

    std::cout << ans;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<ull> vec(100000);
    fill(vec.begin(), vec.end(), 0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve(vec);
        std::cout << '\n';
    }
}