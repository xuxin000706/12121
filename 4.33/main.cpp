#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cout<<"enter three side: ";
    cin>>a>>b>>c;
    if(a*a+b*b==c*c)
        cout<<"ture";
    else if(a*a+c*c==b*b)
        cout<<"ture";
    else if(b*b+c*c==a*a)
        cout<<"ture";
    else
        cout<<"false";
    return 0;
}
