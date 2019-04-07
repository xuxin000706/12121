#include <iostream>

using namespace std;

int main()
{
    int counter=0,number=0,largest=0;
    while(counter<10)
    {
        cout<<"enter amount: ";
        cin>>number;
        if(largest<number)
            largest=number;
        counter=counter+1;

    }
    cout<<"The largest is :"<<largest;
    return 0;
}
