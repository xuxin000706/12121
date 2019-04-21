#include <iostream>

using namespace std;

int tripleByValue(int x)
{
    int number=0;
    return number=3*x;
}
void tripleByReference( int &x)
{
    x=3*x;
    }

int main()
{
    int count=0;
    cin>>count;
   cout<<"number1="<<tripleByValue(count)<<endl;
   tripleByReference(count);
   cout<<"number2="<<count;
   return 0;
}
