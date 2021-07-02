#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n;
    std::cin>>n;
    if(n >= 0){std::cout<<n;return 0;}
    else{
        n=abs(n);
        int last = n%10;
        int beforeLast = (n/10)%10;
        bool removeLast;
        if(max(last, beforeLast) == beforeLast)
        {//remove before last
            std::cout<<(int)(n/100)*10+last;
        }
        else{//remove last
            std::cout<<(n/10);
        }
    }

    return 0;
}