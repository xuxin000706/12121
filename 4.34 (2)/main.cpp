#include<iostream>

using namespace std;

int main()
{
    int x=0,number=1,n=1;
    double e=1.0;
    cout<<"enter the number ";
    cin>>x;
    while(number<x)
    {
        n*=number;
        e+=1.0/n;
        number++;
    }

    cout<<"e is"<<e;
    return 0;
}
