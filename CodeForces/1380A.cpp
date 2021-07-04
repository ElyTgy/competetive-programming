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
        //cout<<"\n";
    }

    return 0;
}

void solve()
{
    int n;
    int l[1000];
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> l[i];
    }

    int i = 0;
    int j = 0;
    int k = 0;
    //int atI = 0;
    //int atJ = 0;
    //int atK = 0;

    for (int z = 1; z < n; ++z)
    {
        for (int w = z; w >= 0; --w) 
        {
            if (l[z] > l[w]) { j = z;  goto next;}
        }
    }
    
    if (j == 0) {
        //permutation was sorted in descending order
        std::cout << "NO" << '\n';
        return;
    }

    next:
    while (k == 0 && j < n - 1)
    {
        for (int z = j; z < n; ++z)
        {
            if (l[z] < l[j])
            {
                k = z; goto next2;
            }
        }
        //int jBefore = j;
        for (int z = j + 1; z < n;++z)
        {
            if (l[z] > l[j]) { j = z; break; }
        }
        //if(j == jBefore){std::cout<<"NO\n"; return;}
    }
    if (k == 0) { std::cout << "NO\n"; return; }

    next2:
    for (int z = j; z >= 0; --z)
    {
        if (l[z] < l[j]) { i = z;break;}
    }

    std::cout << "YES\n";
    std::cout << i+1 << ' ' << j+1 << ' ' << k+1 << '\n';
}
