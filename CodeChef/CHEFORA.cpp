#include<iostream>
#include <cmath>
using namespace std;
#define ull unsigned long long
#include <vector>



void solve();
bool isChefora(ull n, int size)
{
    int nc = n;
    //std::cout<<n<<'\n';
    ull sum = 0;
    ull r;

    for (int i = size - 1; i >= 0; --i)
    {
        r = n % 10;
        sum += r * static_cast<ull>(powl(10, i));
        n = n / 10;
    }
    if (sum == nc) { /*std::cout << sum<<'\n'*/;return true; }
    else { return false; }
}


int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);

    ////get first 500000 chefora numbers till
    std::vector<int> cheforas;
    cheforas.reserve(500000);
    //int* cheforas = new int[1000]

    for (ull i = 1; i <= 9 && cheforas.size() < 500000; ++i) { if (isChefora(i, 1)) { cheforas.push_back(i); } }
    for (ull i = 101; i <= 999 && cheforas.size() < 500000; ++i) { if (isChefora(i, 3)) { cheforas.push_back(i); } }
    for (ull i = 10001; i <= 99999 && cheforas.size() < 5000; ++i) { if (isChefora(i, 5)) { cheforas.push_back(i); } }
    for (ull i = 1000001; i <= 9999999 && cheforas.size() < 5000; ++i) { if (isChefora(i, 7)) { cheforas.push_back(i); } }
    //for (ull i = 100000000; i <= 999999999 && cheforas.size() < 500000; ++i) { if (isChefora(i, 9)) { cheforas.push_back(i); } }
    //for (ull i = 10000000000; i <= 99999999999 && cheforas.size() < 400001; ++i) { if (isChefora(i, 11)) { cheforas.push_back(i); } }

    std::cout << "size: " << cheforas.size() << "\n";
    
    for(int i = 0; i < cheforas.size(); ++i)
    {
        std::cout<<cheforas[i]<< "\n";
    }

    //int q;
    //std::cin >> q;
    //while (q--)
    //{
    //    //solve();
    //    cout << "\n";
    //}
//
    //return 0;
}

void solve()
{

}