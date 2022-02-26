#include <string>
#include <iostream>
#include <vector>
#include <sstream>


int main(){

    int x = 0;
    int y = 0;
    std::string str;
    while(std::cin>>str){
        if(str=="\\n"){std::cout<<x*y; return 0;};
        int n;
        std::cin>>n;
        if(str == "up"){y-=n;}
        else if(str == "down"){y+=n;}
        else{x+=n;}
    }
}