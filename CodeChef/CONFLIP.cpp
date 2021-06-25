#include <iostream>

//maybe add a hashmap later to speed it up?

int main()
{
    int t;
    int g;
    int i;
    int n;
    int q;
    std::cin >> t;
    for (int j = 0; j < t; ++j)
    {
        std::cin >> g;
        for (int z = 0; z < g; ++z)
        {
            //i = 1 -> head
            //i = 2 -> tail
            std::cin >> i;
            std::cin >> n;
            //q = 1 -> get heads
            //q = 2 -> get tails
            std::cin >> q;

            if (n % 2 == 0)
            {
                std::cout << n / 2 << '\n';
            }
            else
            {
                int x = n / 2;
                if (i == q)
                {
                    std::cout << x << '\n';
                }
                else
                {
                    std::cout << x + 1 << '\n';
                }
            }
        }
    }
    
    return 0;
}