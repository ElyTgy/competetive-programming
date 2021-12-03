#include <vector>
#include <string>
#include <iostream>

using namespace std;

//add templatting, implement bin to dec
long long BinToDec(string s)
{
    return std::stoi(s, 0, 2);
}

void GetStringWithCriteria(vector<string>& vec, char toKeep, int index)
{
    if(vec.size() > 1)
    {   
        for(int j = 0; j < vec.size(); ++j)
        {
            if(vec[j][index] != toKeep){
                std::vector<string>::const_iterator it = vec.begin() + j;
                vec.erase(it);--j;
            }
        }
    }
}

string GetRating(vector<string> binaries, char (*valToKeep)(int)){
    int countarr = 0;
    char currbit;

    for(int i = 0; i < 12; ++i)
    {
        countarr = 0;
        for(int j = 0; j < binaries.size(); ++j)
        {
            currbit = binaries[j][i];
            if(currbit == '0'){++countarr;} //if most common bit is zero, countarr[i] will be positive
            else{--countarr;} //if most common bit is one,  countarr[i] will be negative
        }

        GetStringWithCriteria(binaries, valToKeep(countarr), i);
    }

    if(binaries.size() > 1){std::cout<<"vetor length: "<<binaries.size()<<'\n';}
    return binaries[0];
}

char mostCommon(int count){if(count > 0){return '0';} else{return '1';}}
char leastCommon(int count){if(count > 0){return '1';} else{return '0';}}

int main(){
    std::vector<string> binaries;
    int i = 0;
    string s;
    while(true){
        std::cin>>s;
        if(s == "\\n"){break;}
        binaries.push_back(s);
    }

    std::cout<<BinToDec(GetRating(binaries, mostCommon))*BinToDec(GetRating(binaries, leastCommon));
}