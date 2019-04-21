#include <iostream>

using namespace std;

void fanxu(int x)
{
    for(int i=x;i>=0;)
    int a=x%10;
    int b=((x-a)%100)/10;
    int c=((x-b)%1000)/100;
    int d=((x-c)%10000)/1000;
    cout<<a<<b<<c<<d ;

}

int main()
{
    int number;
    cin>>number;
    fanxu(number);
    return 0;
}
