#include <iostream>
using namespace std;

//solving time: 240 - k


void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   
    int t = 1;
    std::cin>>t;
    while(t--)
    {
        solve();
        //cout<<"\n";
    }
   
    return 0;
}

void solve()
{
    int n;
    std::cin>>n;
    if(n==1){std::cout<<1<<"\n";return;}
    if(n==2){std::cout<<-1<<"\n";return;}
    int counter1 = 1;
    int counter2;
    bool current1 = true;    

    if(n%2 == 0){counter2 = (n/2)*n+1;
        for(int i = 1;i <= n*n; ++i)
        {
            if(current1){std::cout<<counter1;++counter1;}
            else{std::cout<<counter2;++counter2;}
            std::cout<<" ";
            if(i%n == 0){
            std::cout<<"\n";}
            else{current1 = !current1;}
        }
    }
    
    else{counter2 = ( ((n/2)*(n/2)) + (n-(n/2))*(n-(n/2)) ) + 1;
        for(int i = 1;i <= n*n; ++i)
        {
            if(i % 2 != 0){std::cout<<counter1;++counter1;}
            else{std::cout<<counter2;++counter2;}
            std::cout<<" ";
            if(i%n == 0){
            std::cout<<"\n";}
        }
    }
}
