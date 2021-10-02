#include <iostream>
#include <vector>
#include <utility>

using namespace std;
typedef unsigned long long ull;

//solving time: 240 - k


void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   
    int t = 1;
    //std::cin>>t;
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
    int m;
    ull t = 1;
    ull currSum = 0;
    ull count=0;
    ull a[n+1];
    ull b[m];

    std::cin>>n;
    std::cin>>m;

    for(int i = 1; i <= n; ++i)
    {
        std::cin>>a[i];
    }

    ull letterNum;
    for(int i = 0; i < m; ++i){
        std::cin>>letterNum;
        while(currSum+a[t] < letterNum){currSum+=a[t]; ++t;}
        std::cout<<t<<" "<<letterNum - currSum<<"\n";
    }
}

////too slow
//void solve()
//{
//    int n, m;
//    std::vector<std::vector<unsigned int>>roomNums;
//    std::vector<unsigned int> temp = {0, 0};
//    std::vector<ull>letters;
//
//    std::cin>>n>>m;
//    for(unsigned int i = 0; i < n; ++i){
//        unsigned int currDormsRoomsCount;
//        std::cin>>currDormsRoomsCount;
//        //std::cout<<"For dorm #"<<i+1<<" there are "<<currDormsRoomsCount<<" rooms"<<"\n";
//        for(unsigned int j = 0; j < currDormsRoomsCount; ++j)
//        {
//            temp[0] = i+1;
//            temp[1] = j+1;
//            //std::cout<<"Adding ("<<temp[0]<<", "<<temp[1]<<") to the list at index "<<roomNums.size()<<"\n";
//            roomNums.push_back(temp);
//        }
//    }
//    
//    std::cout<<"here";
//    for(int i = 0; i < m; ++i)
//    {
//        ull tempnum;
//        std::cin>>tempnum;
//        letters.push_back(tempnum);
//    }
//
//    std::cout<<"here";
//    for(int i = 0; i < m; ++i)
//    {
//        std::cout<<roomNums[letters[i]-1][0]<<" "<<roomNums[letters[i]-1][1]<<"\n";
//    }     
//}
//