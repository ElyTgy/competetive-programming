#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
typedef unsigned long long ull;

void Solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //std::cin>>t;
    while (t--)
    {
        Solve();
    }

    return 0;
}

void Solve()
{
    int n;
    std::cin>>n;
    bool works = true;
    std::unordered_map<int, int> numToCount;
    
    for(int i = 0; i < n; ++i)
    {
        int num;
        std::cin>>num;
        if(numToCount.find(num) == numToCount.end()){
            numToCount[num] = 1;
            //std::cout<<"didnt find "<<num<<", adding it to map with value of 1\n";}
        }
        else{numToCount[num] += 1;}
        //std::cout<<"Adding 1 to the value of the "<<num<<" key\n";}
        if(numToCount[num] > 2){works = false;}
    }

    if(!works){std::cout<<"NO\n";return;}

    std::vector<int> arr1;
    std::vector<int> arr2;
    for(std::unordered_map<int, int>::iterator it = numToCount.begin(); it != numToCount.end(); ++it){
        //std::cout<<it->first << " "<< it->second<<"\n";
        if(it->second == 2){arr1.push_back(it->first); arr2.push_back(it->first);}
        else{arr1.push_back(it->first);}
    }
    
    //
    std::sort(arr1.begin(), arr1.end());
    std::sort(arr2.begin(), arr2.end(), [](int a, int b){return a > b;});

    std::cout<<"YES\n";
    std::cout<<arr1.size()<<"\n";
    for(int i = 0; i < arr1.size(); ++i)
    {
        std::cout<<arr1[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<arr2.size()<<"\n";
    for(int i = 0; i < arr2.size(); ++i)
    {
        std::cout<<arr2[i]<<" ";
    }
    std::cout<<"\n";
}