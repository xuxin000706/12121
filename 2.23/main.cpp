#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,largest,smallest;
    cout<<"Enter five integers: ";
    cin>>a>>b>>c>>d>>e;
    largest=a;
    if(a<b)
        largest=b;
    if(largest<c)
        largest=c;
    if(largest<d)
        largest=d;
    if(largest<e)
        largest=e;
    smallest=a;
    if(b<a)
        smallest=b;
    if(smallest>c)
        smallest=c;
    if(smallest>d)
        smallest=d;
    if(smallest>e)
        smallest=e;
    cout<<"largest is: "<<largest<<endl;
    cout<<"smallest is: "<<smallest<<endl;
    return 0;
}
