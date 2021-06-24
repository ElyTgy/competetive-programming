#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cin>>a;
    std::cin>>b;
    int r = a-b;
    int out = r+1;
    if (out % 10 == 0)
    {
        out = r-1;
    }
    std::cout<<out;
}