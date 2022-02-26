#include <iostream>
#include <vector>

int main(){
    int count = 0;
    long long n;
    std::vector<long long> vec;
    while(std::cin>>n){
        vec.push_back(n);
    }

    long long oldSum = vec[0] + vec[1] + vec[2];
    long long newSum = 0;
    for(int i = 1; i < vec.size()-2; ++i){
        newSum = vec[i] + vec[i+1] + vec[i+2];
        if(newSum > oldSum){
            ++count;
        }
        oldSum = newSum;
    }
    std::cout<<count;
}