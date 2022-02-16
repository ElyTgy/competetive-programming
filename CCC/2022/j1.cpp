#include <iostream>

int main(){
    long long r;
    long long s;

    std::cin>>r;
    std::cin>>s;

    int left = (r*8+s*3)-28;
    //std::cout<<r*8+s*3;
    if(left<0){std::cout<<0;}
    else{std::cout<<left;}

}