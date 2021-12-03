#include <vector>
#include <string>
#include <iostream>

using namespace std;

//add templatting, implement bin to dec
long long BinToDec(string s)
{
    return std::stoi(s, 0, 2);
}

int main(){
    std::vector<string> binaries;
    int i = 0;
    string s;
    while(true){
        std::cin>>s;
        if(s == "\\n"){break;}
        binaries.push_back(s);
    }
    
    int countarr[12];
    char currbit;
    string gammar;
    string epsilonr;
    
    for(int i = 0; i < 12; ++i)
    {
        countarr[i] = 0;
        for(int j = 0; j < binaries.size(); ++j)
        {
            currbit = binaries[j][i];
            if(currbit == '0'){++countarr[i];} //if bit is zero, increment
            else{--countarr[i];} //if bit is oen, decrement
        }
        if(countarr[i] > 0){gammar.push_back('0');epsilonr.push_back('1');}
        else if(countarr[i] < 0){gammar.push_back('1');epsilonr.push_back('0');}
        else{std::cout<<"EQUAL";}
    }

    std::cout<<BinToDec(gammar) * BinToDec(epsilonr);
}