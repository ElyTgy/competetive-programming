#include <bits/stdc++.h>
using namespace std;


int main()
{
    std::ios::sync_with_stdio(false);

    string DNA;
    std::cin>>DNA;

    int max = 0;
    int current = 1;

    for(unsigned int i = 0; i < DNA.size(); ++i)
    {
        if(current > max)
        {
            max = current;
        }

        if(DNA[i] == DNA[i+1])
        {
            ++current;
        }
        else
        {
            current = 1;
        }
    }

    std::cout<<max;

    return 0;
}
