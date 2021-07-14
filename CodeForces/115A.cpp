#include <iostream>
#include <string>
#include <unordered_map>
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

//find the longest branch in the tree
void solve()
{
    int n;
    std::cin>>n;
    int employees[2000];
    for(int i = 0; i < n; ++i)
    {
        int temp;
        std::cin>>temp;
        employees[i] = temp;
        if(temp != -1){--employees[i];}
    }

    int maxCounter = 0;
    //for each employee
    for(int i = 0; i < n; ++i)
    {
        int currCounter=1;
        int j = employees[i];
        while(j != -1){j = employees[j];++currCounter;}
        maxCounter = max(currCounter, maxCounter);
    }

    std::cout<<maxCounter;

}