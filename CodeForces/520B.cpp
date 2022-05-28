#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e5;
int dist[N];
int mrked[N];
 
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
    int n; int m;
    std::cin>>n>>m;
    queue<int> q;
    q.push(n);
    dist[n] = 0;
    while(q.size()>0){
        int currnode = q.front();
        //std::cout<<currnode<<'\n';
        if(currnode == m){std::cout<<dist[currnode];break;}
        q.pop();
        int blue = currnode-1;
        if(blue >= 0 && !mrked[blue]){
            mrked[blue]=true;
            q.push(blue);
            dist[blue] = dist[currnode]+1;
        }
        if(currnode <= m){
            int red = currnode*2;
            if(red >= 0 && !mrked[red]){
                mrked[red]=true;
                q.push(red);
                dist[red] = dist[currnode]+1;
            }
        }
    }
}
