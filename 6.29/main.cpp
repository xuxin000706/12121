#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int sushu(int x)
{
    double y=sqrt(x);
    int i=0;
    for( i=2;i<=y;i++)
        if(x%i==0)
          break;
 return i;

}


int main()
{
    int number=0;
    cout<<"2          ";
    for(number=3;number<=1000;number=number+2)
    {
        int m=sushu(number);
    if(m>sqrt(number))
        cout<<number<<setw(10);
    }

    return 0;
}
