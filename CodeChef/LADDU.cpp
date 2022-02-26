#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    //std::cout<<"At the begining\n";
    int activities;
    string origin;
    int minLadus=0;
    int currLadus=0;
    std::cin>>activities;
    std::cin>>origin;
    if(origin=="INDIAN"){minLadus=200;}else{minLadus=400;}
    string currActivity;
    for(int i = 0; i < activities; ++i)
    {
        std::cin>>currActivity;
        if(currActivity == "CONTEST_WON")
        {
            int rank;
            std::cin>>rank;
            //std::cout<<"reading rank\n";
            if(rank <= 20){//std::cout<<"add bonus of "<<20-rank;
            currLadus += 20-rank;}
            //std::cout<<"add 300 to for contest";
            currLadus += 300;
        }
        else if(currActivity == "TOP_CONTRIBUTOR")
        {
            currLadus += 300;
            //std::cout<<"add 300 for contributions\n";

        }
        else if(currActivity == "BUG_FOUND")
        {
            int severity;
            std::cin>>severity;
            //std::cout<<"Add"<<severity<<"for bug"<<"\n";
            currLadus += severity;
        }
        else{
            currLadus += 50;
            //std::cout<<"add 50 for contest";
        }
    }

    //std::cout<<"FINAL";
    //std::cout<<"currladus"<<currLadus<<"\n";
    //std::cout<<"minladus"<<minLadus<<"\n";
    std::cout<<currLadus / minLadus<<"\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}