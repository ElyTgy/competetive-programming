#include <iostream>
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

void solve()
{
    string n;
    std::cin>>n;
    
    std::unordered_map<char, int> m;
    for(int i = 0; i < n.length(); ++i)
    {
        if(m.find(n[i]) != m.end()){m[n[i]]++;}
        else{m[n[i]]=1;}
    }

    int uniqueCount = 0;
    std::unordered_map<char, int>::iterator it = m.begin();
    for(it; it != m.end(); ++it)
    {
        ++uniqueCount;
    }

    if(uniqueCount % 2 == 0){std::cout<<"CHAT WITH HER!";}
    else{std::cout<<"IGNORE HIM!";}
}