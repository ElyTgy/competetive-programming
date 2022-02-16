#include <iostream>

int main(){
    int nAbover40 = 0;
    long long N; //total n of players
    std::cin>>N;
    for(int i = 0; i < N; ++i){
        int scored;
        int fouled;
        std::cin>>scored;
        std::cin>>fouled;
        int currScore = scored*5 - fouled*3;
        if(currScore > 40){++nAbover40;}
    }
    std::cout<<nAbover40;
    if(nAbover40 == N){
        std::cout<<"+";
    }

}