#include <iostream>

void foo(int x)
{
    std::cout<<x<<std::endl;
}

int zzzz=0; // dummy variable
int main()
{
    int x;
    int r=4;
    int y=x+r;
    if(x) zzzz++; // uninitialized error reported here
    if(r) zzzz++;
    if(y) zzzz++; // uninitialized error reported here

    foo(y);
    
    return 0;
}
