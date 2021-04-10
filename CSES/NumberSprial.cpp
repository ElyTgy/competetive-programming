#include<iostream>
using namespace std;

unsigned long int NumAtSquare(unsigned int xOry)
{
    unsigned long int n = 0;
    for(unsigned int i = 1; i < xOry; ++i)
    {
        n += 2*i;
    }
    return n+1;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    std::cin>>test;

    for(int i = 0; i < test; ++i)
    {
        unsigned int x;
        unsigned int y;
        std::cin>>x;
        std::cin>>y;

        if(x == 1 && y == 1){std::cout<<"1\n";}

        else if(x < y)
        {
            if(!(y & 1))
            {
                unsigned long long int val = NumAtSquare(y-1);//smaller
                val += x + y - 2;
                std::cout<<val<<'\n';
            }
            else //odd col
            {
                unsigned long long int val = NumAtSquare(y);//bigger
                val -= x+y;
                std::cout<<val<<'\n';
            }

        }
        else if(x > y)
        {
           if(!(x & 1)) //row even
            {
                unsigned long long int val = NumAtSquare(x);//smaller
                val += x-y;
                std::cout<<val<<'\n';
            }
            else //odd col
            {
                unsigned long long int val = NumAtSquare(x-1);//bigger
                val += x+y-2;
                std::cout<<val<<'\n';
            }
        }
        else if(x==y)
        {
            std::cout<<NumAtSquare(x)<<'\n';
        }

    }


}
