#include <iostream>

using namespace std;

int main()
{
    int number=1;
    for(int i=1;i<=5;i++)
    {
        number=number*i;
        cout<<i<<"! is "<<number<<endl;
    }
    return 0;
}
