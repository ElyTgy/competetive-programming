#include <string>
#include <iostream>
#include <vector>
#include <sstream>



int main(){

    int aim = 0;
    int x = 0;
    int y = 0;
    std::string str;
    while(std::cin>>str){
        if(str=="\\n"){std::cout<<x*y; return 0;};
        int n;
        std::cin>>n;
        if(str == "up"){aim-=n;}
        else if(str == "down"){aim+=n;}
        else{x+=n;y+=aim*n;}
    }
}