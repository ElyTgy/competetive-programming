#include <iostream>
#include <string>
//#define DEBUG
using namespace std;
 
 
 
void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    int t = 1;
    std::cin>>t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}
 
 
//if k === 0, return true
// make two pointers, one pointing to the begginine, one to the end
//start incrementing/decrementing the pointers unitl TODO
//for each c at pointer, 
    //stop if they are not the same
        //if when they stopped, the length until the c that theyre at is more than
        //or equal to is bigger than or equal to k, its ok, else, false
 
    //if they end up at the same position, or go past one another(happens if str len in even)
        //check to see len-1 is bigger than or equal to 2k to see if there is at 
        //least one character with len 1 at a[k+1]
        //break
 
 
void solve()
{
    int n, k;
    string str;
    std::cin>>n>>k>>str;
    int bCounter = 0; int eCounter = str.length()-1;
    
    if(k == 0){std::cout<<"YES"<<'\n'; return;}
    if(str.length() <= 2){std::cout<<"NO"<<'\n';return;}
    if(str.length() < k*2 + 1){std::cout<<"NO"<<'\n';return;}
 
    #ifdef DEBUG
    int cDebug = 0;
    #endif
 
    while(true)
    {
        if(eCounter == bCounter)
        {
            //std::cout<<"e and b are equal at "<<cDebug<<'\n';
            {if( bCounter >= k) {std::cout<<"YES";}
            else{std::cout<<"NO";}}
            std::cout<<'\n';
            return;
        }
        
        if (eCounter < bCounter)
        {
            //std::cout<<"e less than b after "<<cDebug<<'\n';
            if(bCounter-1 >= k){std::cout<<"YES";}
            else{std::cout<<"NO";} 
            std::cout<<'\n';return;
        }
        
        if(str[eCounter] != str[bCounter])
        {
            //std::cout<<"at e and at b are not equal after "<<cDebug<<'\n';
            if(eCounter - bCounter >= 1 && bCounter>= k)
            {std::cout<<"YES";}
            else
            {std::cout<<"NO";}
            std::cout<<'\n';
            return;
        }
 
        --eCounter;++bCounter;
 
        #ifdef DEBUG
        ++cDebug;
        #endif
    }
    
}