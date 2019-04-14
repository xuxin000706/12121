#include <iostream>

using namespace std;

double small(double x,double y,double z)
{
    double s=x;
    if(s>y)
        s=y;
    if(s>z)
        s=z;
    return s;
}

int main()
{

    double result;
    cout << "enter three number " ;
    double number1=0,number2=0,number3=0;
    cin>> number1>>number2>>number3;
    result=small(number1,number2,number3);
    cout<<"the result is "<<result;
    return 0;
}

