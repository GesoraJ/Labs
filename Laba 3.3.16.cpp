#include <iostream>
#include <cmath>
bool div_wout_resid(int a)
{
    return a%5==0||a%10==0;
}
bool not_equal(int x,int y, int z)
{
    return (x==10||y==10)||z==10;
}
bool three_multiple(int a)
{
    return (a>99&&a<1000)&&a%10==0;
}
void final(int a)
{
    if(a>9&&a<100)
    {
        ++a;
    }
    else
    {
        a-=2;
    }
    a*=5;
       std::cout<<a<<std::endl;
}
int main()
{
    std::cout<<div_wout_resid(40)<<std::endl;
    std::cout<<not_equal(5,3,1)<<std::endl;
    std::cout<<three_multiple(330)<<std::endl;
    final(10);
}

