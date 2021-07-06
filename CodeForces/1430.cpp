#include <iostream>
using namespace std;



void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    std::cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}

void solve()
{
    int n;
    std::cin >> n;

    if (n % 7 == 0) { std::cout << "0 0 " << n / 7;return; }
    else if (n % 5 == 0) { std::cout << "0 " << n / 5 << " 0";return; }
    else if (n % 3 == 0) { std::cout << n / 3 << " 0 0";return; }

    int remainder = n / 7;
    while (remainder >= 0)
    {
        int sub = n - remainder * 7;
        if (sub >= 3)
        {
            if (sub % 3 == 0) { std::cout << sub / 3 << " 0 " << remainder;return; }
            else if (sub % 5 == 0) { std::cout <<"0 " << sub / 5 <<" " <<remainder;return; }

            int secondRemainder = sub / 5;
            while (secondRemainder >= 0) {
                int sub2 = sub - secondRemainder * 5;
                if (sub2 % 3 == 0) { std::cout << sub2 / 3 << " " << secondRemainder << " " << remainder;return; }
                --secondRemainder;
            }

        }
        --remainder;
    }
    std::cout << -1;
}