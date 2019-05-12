#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    int x1=0,x2=0,y1=0,y2=0;
    cin>>x1>>y1>>x2>>y2;
   Complex a( x1, y1 ), b( x2, y2), c;

   a.printComplex();
   cout << " + ";
   b.printComplex();
   cout << " = ";
   c = a.add( b );
   c.printComplex();

   cout << '\n';

   a.printComplex();
   cout << " - ";
   b.printComplex();
   cout << " = ";
   c = a.subtract( b );
   c.printComplex();
   cout << endl;
}
