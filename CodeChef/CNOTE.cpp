#include <iostream>
using namespace std;
//X number of pages he wants to write
//Y number of pages left in original notebook
//X-Y minimum pages
//K max price notebook can be
//N number of notebooks
//P arr of page nums
//C arr of prices


int main()
{
    bool canBuy = false;
    int t;
    int x;
    int y;
    int k;
    int n;
    int p;
    int c;
    int xyDiff;
    cin>>t;
    for(int i = 0; i < t; ++i)
    {
       cin>>x; //3
       cin>>y; //1
       cin>>k; //2
       cin>>n; //2

       xyDiff = x-y; //2
       
       for(int i = 0; i < n; ++i)
       {
           cin>>p;//2, 2 
           cin>>c;//3, 3
           if(p >= xyDiff && c <= k)
           {
               canBuy = true;
           }
       }

       if (canBuy){cout<<"LuckyChef"<<'\n';}
       else{cout<<"UnluckyChef"<<'\n';}
       canBuy = false;

       
    }
    return 0;
}