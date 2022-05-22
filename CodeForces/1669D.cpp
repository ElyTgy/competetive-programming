#include <vector>
#include <iostream>
#include <string>
using namespace std;

const int N = 100000;
void solve();

int main()
{
    int t = 1;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    std::cin >> n;
    string s;
    std::cin >> s;

    bool added = false;
    int rCount = 0;
    int bCount = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        while ((i < s.size()) && (s[i] != 'W')) {
            added = true;
            if (s[i] == 'R') { ++rCount; }
            else { ++bCount; }
            ++i;
        }
        if (added) {
            if (rCount == 0 || bCount == 0) { std::cout << "NO\n";return; }
            --i;
            rCount = 0;
            bCount = 0;
        }
        added = false;
    }
    std::cout << "YES\n";
}
