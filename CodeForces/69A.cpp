#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
    int x = 0;
    int y = 0;
    int z = 0;
    std::cin>>n;
    for(int i = 0; i < n;++i)
    {
        int tempx;
        int tempy;
        int tempz;

        std::cin>>tempx;
        std::cin>>tempy;
        std::cin>>tempz;

        x+=tempx;
        y+=tempy;
        z+=tempz;
    }

    if(x == 0 && y == 0 && z ==0)
    {std::cout<<"YES\n";}
    else
    {std::cout<<"NO\n";}
	return 0;
}