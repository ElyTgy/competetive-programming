#include <iostream>
#include <algorithm>



int main()
{
    int t;
    int m;
    int n;
    int a[1000];

    int chef[1000];
    int assistant[1000];

    std::cin >> t;

    for (int j = 0; j < t; ++j)
    {
        std::cin >> n; 
        std::cin >> m; 

        for (int i = 0; i < n; ++i)
        {
            a[i] = i;
        }

        for (int i = 0; i < m; ++i)
        {
            int index;
            std::cin >> index;
            a[index - 1] = -1;
        }

        std::sort(a, a + n);
        
        int chef_l = 0;
        int assistant_l = 0;
        for (int i = m; i < n; ++i)
        {
            if ((i-m+1) % 2 != 0)
            {
                chef[chef_l] = a[i]+1;
                ++chef_l;
            }
            else
            {
                assistant[assistant_l] = a[i]+1;
                ++assistant_l;
            }
        }

        for (int i = 0; i < chef_l; ++i)
        {
            std::cout << chef[i] << " ";
        }
        std::cout << '\n';
        for (int i = 0; i < assistant_l; ++i)
        {
            std::cout << assistant[i] << " ";
        }
        std::cout << '\n';
    }

}