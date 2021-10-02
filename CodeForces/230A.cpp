#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;


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

const string& RemoveTrailingSpace(string& str)
{
    int i = str.length()-1;
    while(str[i] == ' ')
    {
        str.pop_back();
        --i;
    }
    return str;
}

void solve()
{
    int s, n;
    int arrX[1000];
    int arrY[1000];
    int sum = 0;
    int prevS = 0;
    std::cin>>s>>n;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>arrX[i]>>arrY[i];
    }
    while(true)
    {
        if(sum == -n){std::cout<<"YES";break;}
        else if(s == prevS){std::cout<<"NO";break;}
        else{
            prevS = s;
            sum = 0;
            for(int i = 0; i < n; ++i)
            {
                if(arrX[i] < s && arrX[i] != -1){
                    arrX[i] = -1;
                    s += arrY[i];
                }
                sum += arrX[i];
            }
        }
    }
    
    
}  