#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
 
 
void Solve();
int GetMostSuperior(vector<vector<int>> mat, std::vector<int>& superiors, int n);
bool firstIsSuperior(vector<int> a, vector<int> b);
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    int t = 1;
    std::cin>>t;
    while (t--)
    {
        Solve();
    }
 
    return 0;
}
 
void Solve()
{
    std::vector<vector<int>> mat;
    std::vector<int> superiors;
    int n;
    std::cin>>n;
 
    for(int i = 0; i < n; ++i)
    {
        vector<int> ranks;
        for(int j = 0; j < 5; ++j)
        {
            int num;
            std::cin>>num;
            ranks.push_back(num);
        }
        mat.push_back(ranks);
    }
 
    if(n==1){std::cout<<1<<'\n';}
    else{
        std::cout<<GetMostSuperior(mat, superiors, n)<<'\n';
    }
}
 
int GetMostSuperior(vector<vector<int>> mat, std::vector<int>& superiors, int n)
{
    int superior = 0;
    for(int i = 1; i < n; ++i)
    {
        if(!firstIsSuperior(mat[superior], mat[i])){superior = i;}
    }
    for(int i = 0; i < n; ++i)
    {
        if(i!=superior)
        {
            if(!firstIsSuperior(mat[superior], mat[i])){return -1;}
        }
    }
    return superior+1;
}
 
bool firstIsSuperior(vector<int> a, vector<int> b)
{
    int aCount = 0;
    int bCount = 0;
    for(int i = 0; i < 5; ++i)
    {
        if(a[i] < b[i]){++aCount;}
        else if(b[i] < a[i]){++bCount;}
    }
    if(aCount > bCount && aCount >= 3){return true;}
    return false;
}