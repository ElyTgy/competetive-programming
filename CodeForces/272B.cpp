#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int search(int num, int n);
vector<pair<int, int>> a;
int b[N];

void solve();

int main()
{
    int t = 1;
    //std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve() {
    long long v=0; long long p=0;
    int n; int m;
    std::cin>>n;
    for(int i=0; i<n; ++i){
        int temp;
        std::cin>>temp;
        a.push_back(make_pair(temp, i));
    }
    std::cin>>m;
    for(int i=0; i<m;++i){
        std::cin>>b[i];
    }

    sort(a.begin(), a.end());
    for(int i=0; i<m;++i){
        int vtmp = search(b[i], n)+1;
        int ptmp = (n-vtmp)+1;
        //std::cout<<"temp: "<<vtmp<<" "<<ptmp<<'\n';
        v+=vtmp;
        p+=ptmp;
        //std::cout<<"v "<<v<<", p "<<p<<'\n';
    }

    std::cout<<v<<" "<<p;
}

int search(int num, int n){
    //std::cout<<num<<":"<<'\n';
    int l=0; int r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(num > a[mid].first){
            l=mid+1;
        }
        else if(num < a[mid].first){
            r=mid-1;
        }
        else{
            //std::cout<<">>"<<a[mid].second<<'\n';
            return a[mid].second;
        }
    }
    return -1;
}