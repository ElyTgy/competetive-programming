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
    int n;
    int m;
    char mtx[50][50];
    int c = 0;
    
    std::cin>>n>>m;
    string temp;
    for(int i = 0; i < n; ++i)
    {
        std::cin>>temp;
        for(int j = 0; j < m; ++j)
        {
            mtx[i][j] = temp[j];
        }
    }
    
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = 0; j < m-1; ++j)
        {
            if((mtx[i][j]=='f'|| mtx[i][j]=='a'||mtx[i][j]=='c'||mtx[i][j]=='e') &&
            ((mtx[i+1][j]=='f'||mtx[i+1][j]=='a'||mtx[i+1][j]=='c'||mtx[i+1][j]=='e') && (mtx[i+1][j]!=mtx[i][j])) &&
            ((mtx[i][j+1]=='f'||mtx[i][j+1]=='a'||mtx[i][j+1]=='c'||mtx[i][j+1]=='e') && (mtx[i][j+1]!=mtx[i][j] && mtx[i][j+1]!=mtx[i+1][j])) &&
            ((mtx[i+1][j+1]=='f'||mtx[i+1][j+1]=='a'||mtx[i+1][j+1]=='c'||mtx[i+1][j+1]=='e') && (mtx[i+1][j+1]!=mtx[i][j] && mtx[i+1][j+1] != mtx[i][j+1] && mtx[i+1][j+1] != mtx[i+1][j])))
            {++c;}
        }
    }

    std::cout<<c<<'\n';

}
