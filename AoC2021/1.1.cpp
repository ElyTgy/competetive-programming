#include <iostream>

int main(){
    int count = 0;
    long long numold = 171; //the first number in the input
    long long numnew;
    while(std::cin>>numnew){
        if(numold < numnew){
            ++count;
        }
        numold = numnew;
    }
    std::cout<<count;
}