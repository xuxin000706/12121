#include <iostream>

using namespace std;

int main()
{
    int a,b,c,largest,smallest,Sum,Average,Product;
    cout << "Input three different integers: ";
    cin >> a >> b >> c;
    Sum = a+b+c;
    Average = (a+b+c)/3;
    Product = a*b*c;
    largest=a;
    if(a<b)
        largest=b;
    if(largest<c)
        largest=c;
    smallest=a;
    if(smallest>b)
        smallest=b;
    if(smallest>c)
        smallest=c;
    cout<<"Sum is "<<Sum<<endl;
    cout<<"Average is "<<Average<<endl;
    cout<<"Product is "<<Product<<endl;
    cout<<"Smallest is "<<smallest<<endl;
    cout<<"Largest is "<<largest<<endl;
    return 0;
}
