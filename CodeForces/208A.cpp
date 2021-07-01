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
    std::string str;
    string outstr = "";
    int wubCount=0;
    int lastWub=0;
    std::cin>>str;

    if(str.length() <= 3 && str != "WUB"){std::cout<<str;return;}

    int i = 0;
    while(i < str.length())
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B' && i <= str.length()-3)
        {
            lastWub = i+2;
            i+=3;
            wubCount += 1;
            if((!outstr.empty()) && wubCount == 1){outstr.push_back(' ');}
        }
        else
        {
            wubCount = 0;
            outstr.push_back(str[i]);
            ++i;
        }
    }

    //if (lastWub+1 >= str.length()-3 && lastWub+1 < str.length())
    //{for(int j = lastWub+1; j < str.length(); ++j){outstr.push_back(str[j]);}}
    //else if (lastWub+1 < str.length()){for(int j = str.length()-3; j < str.length(); ++j){outstr.push_back(str[j]);}}

    RemoveTrailingSpace(outstr);
    std::cout<<outstr;
}  