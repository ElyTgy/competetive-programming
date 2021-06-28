#include <iostream>
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
        //  cout<<"\n";
    }

    return 0;
}

void solve()
{
    int w;
    std::cin >> w;
    bool divides = false;
    for (int i = 2; i < w; i += 2)
    {
        if(((w-i) % 2 == 0) && (w % 2 == 0))
        {
            divides = true;
            break;
        }
    }

    if (divides)
    {
        std::cout << "YES" << '\n';
    }
    else {
        std::cout << "NO" << '\n';
    }
}


//dont get tricked by the question using the word divide
//i just had to see if there were any even ratios, thats all
//no need to divide or get remainder
//pay more attention to the problem statement
