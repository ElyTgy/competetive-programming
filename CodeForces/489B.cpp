#include <iostream>
#include <algorithm>

using namespace std;

int boys[100];
int girls[100];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int res = 0;
        int n;
        int m;
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> boys[i];
        }
        std::cin >> m;
        for (int i = 0; i < m; ++i) {
            std::cin >> girls[i];
        }
        sort(boys, boys + n);
        sort(girls, girls + m);
        for (int i = 0; i < n;++i) {
            for (int j = 0; j < m;++j) {
                if ((girls[j] != -1) && (abs(boys[i]-girls[j])==0 || abs(boys[i]- girls[j]) == 1)) {
                    girls[j] = -1;
                    ++res;
                    break;
                }
            }
        }
        std::cout << res;
    }
    return 0;
}