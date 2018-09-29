#include <iostream>
#include <cmath>
void f1(int i)                          //Функция нахождения суммы цифр
{
    int temp = 0;
    for(;i!=0;i=i/10)
    {
        temp = temp+i%10;
    }
    std::cout<<temp<<std::endl;
}
bool f2(int a)                          //Функция проверки числа на кратность 50
{
    return a%50==0;
}
bool f3(int a)                          //Функция проверки на трёхзначность и начинается ли число с цифры 8
{
    if(a<1000&&a>99)
    {
      int temp = 0;
        for(;a!=0;a=a/10)
      {
          temp = a%10;
      }
        return temp%8==0;
    }
    return 0;
}
double ctg(double x)                    //Функция для нахождения ctg(Как оказалось, она не понадобилась)
{
    return cos(x)/sin(x);
}
double f4(double x, double y)          //Функция 4 задания, формулы наизусть не знаю
{                                      //Но догадался и сократил по найденным формулам в интернете
    double third = tan(x+y);
    return third;
}
int main()
{
    f1(1111);
    std::cout<<f2(150)<<std::endl;
    std::cout<<f3(832)<<std::endl;
    std::cout<<f4(1,1)<<std::endl;
    return 0;
}

