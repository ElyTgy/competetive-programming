#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>
#include <stack>

using namespace std;

#define ar array
#define ll long long
#define ull unsigned long long

/*A common problem for compilers and text editors is determining whether the
parentheses in a string are balanced and properly nested. For example, the string
((())())() contains properly nested pairs of parentheses, which the strings )()( and
()) do not. Give an algorithm that returns true if a string contains properly nested
and balanced parentheses, and false if otherwise. For full credit, identify the position
of the first offending parenthesis if the string is not properly nested and balanced.*/



bool solve(int& offPos)
{
    std::string txt;
    std::vector<int>s;
    std::cin>>txt;
    offPos = -1;
    
    for(int i = 0; i < txt.size(); ++i)
    {
        if(txt[i] == ')')
        {
            if(s.empty()){offPos = i; return false;}
            s.pop_back();
        }
        else //assuming that there are no characters other than ( and )
        {
            s.push_back(i);
        }
    }

    if(s.empty()){offPos = -1; return true;}
    else{offPos = s.front(); return false;}

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    //cin >> tc;
    int offPos = -1;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        
        std::cout<<solve(offPos);
        std::cout << '\n';
        std::cout<<offPos;
        std::cout << '\n';}
}