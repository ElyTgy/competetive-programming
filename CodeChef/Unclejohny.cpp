#include <iostream>
#include <algorithm>


int solve(long* a, int n, long y)
{
    std::sort(a, a + n);
    auto ptr = std::find(a, a+n, y);
    return (ptr - a) + 1;
}

int main()
{
    int n;
    int k;
    long y;
    long a[100];

    int t;
    //get number of test cases
    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        //get number of inputs
        std::cin >> n;
        for (int i = 0; i < n; ++i)
        {
            //get each entry in list
            std::cin >> a[i];
        }
        //get pos K
        std::cin >> k;

        //num at K
        y = a[k - 1];
        std::cout << solve(a, n, y) << '\n';
    }

    return 0;
}