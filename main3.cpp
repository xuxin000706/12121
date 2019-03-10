#include <iostream>

using namespace std;

int main()
{
    float r,d,a=3.14159,s,l;
    cout<<"输入半径";
    cin>>r;
    d=2*r;
    l=2*a*r;
    s=a*r*r;
    cout<<"直径为"<<d<<endl;
    cout<<"周长为"<<l<<endl;
    cout<<"面积为"<<s<<endl;

    return 0;
}
