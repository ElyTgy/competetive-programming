#include <vector>
#include <string>
#include <iostream>
typedef long long ll;
typedef unsigned long long ull;

const int N = 1.5*1e5;

void solve();
int main()
{
    int t = 1;
    std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve(){
    std::vector<int> ans;
    std::string s;
    std::cin>>s;
    for(int i = 0; i < s.length()-2; ++i)
    {
        //std::cout<<"i"<<i<<'\n';
        if(i+4 < s.length() && (s[i]=='t'&&s[i+1]=='w'&&s[i+2]=='o'&&s[i+3]=='n'&&s[i+4]=='e')){ans.push_back(i+2); i+=4;}
        else if(i+2 < s.length() && (s[i]=='t'&&s[i+1]=='w'&&s[i+2]=='o'||s[i]=='o'&&s[i+1]=='n'&&s[i+2]=='e')){ans.push_back(i+1); i+=2;}
        else if(i >= s.length()){break;}
    }

    std::cout<<ans.size()<<'\n';
    for(int i =0; i < ans.size(); ++i)
    {
        std::cout<<ans[i]+1<<" ";
    }
    std::cout<<'\n';
}