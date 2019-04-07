#include<iostream>

using namespace std;

int main()
{
    int x=0,number=1,n=1;
    cout<<"enter the number ";
    cin>>x;
    n=x;
    while(n>0)
    {
        number=number*n;
        n--;
    }
    cout<<x<<"! is"<<number;
    return 0;
}


