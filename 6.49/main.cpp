#include <iostream>

using namespace std;

inline double circleArea(int x)
{
    double Area=0;
    Area=3.14*x*x;
    return Area;
}

int main()
{
    double r=0,result=0;
    cout << "enter r " << endl;
    cin >> r;
    result= circleArea( r);
    cout<<"the area is "<<result;
    return 0;
}
