#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
const int M = 1000;
vector<char> v[N];
queue<pair<int,int>> q;
int dist[N][M];
int mrk[N][M];
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
    int res = 0;
    
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    pair<int, int> s;
    pair<int, int> e;
    
    for(int i=0; i< n; ++i){
        for(int j = 0; j < m; ++j){
            char temp;
            cin>>temp;
            if(temp=='S'){s = make_pair(i,j);}
            if(temp=='E'){e = make_pair(i,j);}
            v[i].push_back(temp);
        }
    }
    for(int i =0; i <n; ++i){
        for(int j =0; j < m; ++j){
            dist[i][j] = -1;
        }
    }
    
    q.push(e);
    mrk[e.first][e.second] = true;
    dist[e.first][e.second] = 0;
    while(q.size() > 0){
        pair<int, int> node = q.front();
        q.pop();
        if(node.first+1 < n && v[node.first+1][node.second]!='T'){
            if(!mrk[node.first+1][node.second]){
                dist[node.first+1][node.second] = dist[node.first][node.second] + 1;
                mrk[node.first+1][node.second] = true;
                q.push(make_pair(node.first+1, node.second));
            }
        }
        if(node.first-1 >= 0 && v[node.first-1][node.second]!='T'){
            if(!mrk[node.first-1][node.second]){
                dist[node.first-1][node.second] = dist[node.first][node.second] + 1;
                mrk[node.first-1][node.second] = true;
                q.push(make_pair(node.first-1, node.second));
            }
        }
        if(node.second+1 < m && v[node.first][node.second+1]!='T'){
            if(!mrk[node.first][node.second+1]){
                dist[node.first][node.second+1] = dist[node.first][node.second] + 1;
                mrk[node.first][node.second+1] = true;
                q.push(make_pair(node.first, node.second+1));
            }
        }
        if(node.second-1 >= 0 && v[node.first][node.second-1]!='T'){
            if(!mrk[node.first][node.second-1]){
                dist[node.first][node.second-1] = dist[node.first][node.second] + 1;
                mrk[node.first][node.second-1] = true;
                q.push(make_pair(node.first, node.second-1));
            }
        }
    }
    
    int toS = dist[s.first][s.second];
    //cout<<toS<<'\n';
    for(int i=0; i< n; ++i){
        for(int j = 0; j < m; ++j){
            if(v[i][j] >= '0' && v[i][j]<= '9'){
                if(dist[i][j]!=-1 && dist[i][j] <= toS){
                    res += v[i][j] - '0';
                    /*if(v[i][j] != '0'){
                        cout<<i<<" "<<j<<": "<<dist[i][j]<<'\n';
                    }*/
                }
            }
        }
    }
    std::cout<<res;
}
