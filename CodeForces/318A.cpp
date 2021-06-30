#include <iostream>
#include <string>
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
    }

    return 0;
}

void solve()
{
    unsigned long long n;
    unsigned long long k;
    std::cin>>n;
    std::cin>>k;
    bool evenN;
    
    if (n % 2 == 0){evenN = true;}
    else{evenN = false;}
    unsigned long long atK;
    if(evenN)
    {
        if(k <= n/2){//number will be kth odd number
            atK = 1 + 2 * (k - 1);
        }
        else{//number will be (k - n/2)th even number, not counting 0
            atK = 2 * (k-n/2);
        }
    }
    else
    {
        if(k <= n/2 + 1){//number will be kth odd number
            atK = 1 + 2 * (k - 1);
        }
        else{//number will be (k-(n/2+1))th even number
            atK = 2 * (k-(n/2+1));
        }
    }

    std::cout<<atK;
}