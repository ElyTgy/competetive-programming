#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
bool arr[N][N];
bool leftdp[N][N];
bool rightdp[N][N];
bool updp[N][N];
bool downdp[N][N];
void solve();

int main()
{
    int t = 1;
    //std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

void solve() {
    int n; int m;
    std::cin>>n>>m;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            std::cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; ++i){
        bool hasLeft = false;
        for(int j=0; j<m; ++j){
            leftdp[i][j]=hasLeft;
            if(arr[i][j]==1){
                hasLeft=true;
            }
        }
    }

    for(int i=0; i<n; ++i){
        bool hasRight = false;
        for(int j=m-1; j>=0; --j){
            rightdp[i][j]=hasRight;
            if(arr[i][j]==1){
                hasRight=true;
            }
        }
    }

    for(int i=0; i<m; ++i){
        bool hasDown = false;
        for(int j=n-1; j>=0; --j){
            //std::cout<<"("<<i<<", "<<j<<") - "<<hasDown<<'\n';
            downdp[j][i]=hasDown;
            if(arr[j][i]==1){
                hasDown=true;
            }
        }
    }


     for(int i=0; i<m; ++i){
        bool hasUp = false;
        for(int j=0; j<n; ++j){
            updp[j][i]=hasUp;
            if(arr[j][i]==1){
                hasUp=true;
            }
        }
    }

    /*for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            std::cout<<downdp[i][j]<<' ';
        }
        std::cout<<'\n';
    }
    std::cout<<'\n';
    std::cout<<'\n';*/
    
    int res=0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(arr[i][j]!=1){
                //std::cout<<"("<<i<<", "<<j<<" - ";
                if(leftdp[i][j]){/*std::cout<<"left, "*/;++res;}
                if(rightdp[i][j]){/*std::cout<<"right, ";*/++res;}
                if(updp[i][j]){/*std::cout<<"up, ";*/++res;}
                if(downdp[i][j]){/*std::cout<<"down, ";*/++res;}
            }
            //std::cout<<'\n';
        }
    }
    std::cout<<res;
}
