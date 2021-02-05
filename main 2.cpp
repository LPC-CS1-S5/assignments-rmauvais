#include <iostream>
#include <iomanip>

using namespace std;

int main()

{

float sum,average;

int num1=28, num2=32, num3=37, num4=24, num5=33;

sum =num1+num2+num3+num4+num5;

average = sum /5;

cout<<"\n Average:"<<setprecision(3)<<average;

return 0;

}