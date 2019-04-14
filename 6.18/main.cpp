#include <iostream>

using namespace std;

int integerPower(int x,int y)
{
    int i=1;
    int power=1;
    while(i<=y)
    {
        power=power*x;
        i++;
    }
    return power;
}

int main()
{
    int base=0,exponent=0,total=0;
    cout<<"enter base ";
    cin>>base;
    cout<<"enter exponent ";
    cin>>exponent;
    total= integerPower(base,exponent);
    cout<<"total is "<<total;
    return 0;



}

