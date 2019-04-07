#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double pi=0,number=0,n=0,m=1;
    for( double i=1;i<=2000;i=i+2)
    {
        m++;
        n=pow(-1,m);
        number=(4/i)*n;
        pi=pi+number;
        cout<<"pi"<<m-1<<" is " <<pi<<endl;
    }
    return 0;
}
