#include <iostream>
#include <cmath>
void f1(int i)                          //������� ���������� ����� ����
{
    int temp = 0;
    for(;i!=0;i=i/10)
    {
        temp = temp+i%10;
    }
    std::cout<<temp<<std::endl;
}
bool f2(int a)                          //������� �������� ����� �� ��������� 50
{
    return a%50==0;
}
bool f3(int a)                          //������� �������� �� ������������ � ���������� �� ����� � ����� 8
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
double ctg(double x)                    //������� ��� ���������� ctg(��� ���������, ��� �� ������������)
{
    return cos(x)/sin(x);
}
double f4(double x, double y)          //������� 4 �������, ������� �������� �� ����
{                                      //�� ��������� � �������� �� ��������� �������� � ���������
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

