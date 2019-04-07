#include <iostream>

using namespace std;

int main()
{
    int number=0,smallest=0,x=0;
    cin>>number;
    cin>>x;
    smallest=x;
    for(int counter=1;counter<number;counter++)
    {
       if(smallest>x)
            smallest=x;
       cin>>x;
    }
    cout << "the smallest is "<<smallest << endl;
    return 0;
}
