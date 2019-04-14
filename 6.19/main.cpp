#include <iostream>
#include<cmath>

using namespace std;

int hypotenuse(double x,double y)
{
    double side=0;
    side=sqrt(x*x+y*y);
    return side;


}

int main()
{
    double side1=0,side2=0,side3=0;
    cout<<"enter side1 ";
    cin>>side1;
    cout<<"enter side2 ";
    cin>>side2;
    side3=hypotenuse(side1,side2);
    cout << "the thrid side is "<<side3;
    return 0;
}
