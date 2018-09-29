#include <iostream>
#include <cmath>
#include <cstdlib>
#define PI 3.14
#define E 2.71
double f1(double x, double y)
{
    double a = pow(x,y+x);
    double b = abs(x);
    double c = sqrt(x);
    return a-b+c;
}
double f2(double x)
{
    double num = pow(x,2);
    double denum = log(x)+sqrt(pow(x,2));
    return num/denum;
}
bool f3(double x, double y, double z)
{
    double first = pow(y,3);
    double second = (x+z)/4;
    return first>=second;
}
int main()
{
    double c = hypot(4,3);
    double result1 = f1(4,1);
    double result2 = f2(5);
    double result3 = f3(3,0,4);

    std::cout<<PI<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<result1<<std::endl;
    std::cout<<result2<<std::endl;
    std::cout<<result3<<std::endl;
}
