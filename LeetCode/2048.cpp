#include <unordered_map>
#include <iostream>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()


bool isBalanced(int n)
{
    int cnt[10] = {};
    while (n)
    {
        if (n % 10 == 0) { return false; }
        cnt[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10;++i)
    {
        if (cnt[i] && cnt[i] != i) { return false; }
    }
    return true;
}

void solve() {
    int n;
    std::cin >> n;
    bool balanced = false;
    while (!balanced) {
        ++n;
        balanced = isBalanced(n);
    }
    std::cout<<n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}