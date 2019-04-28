#include <iostream>
#include <array>

using namespace std;

int main()
{
    int number=0;
    cout<<"Please enter 20 numbers";
    const int size=20;
    array<int,size>m;
    array<int,size>n;
    for(int i=0;i<20;i++)
    {
        cin>>number;
        m[i]=number;
    }
    int counter=0;
    for(int i=0;i<20;i++)
    {
        int j=0;
        for(;j<counter;j++)
        {
            if(m[i]==n[j])
                break;
        }
        if (j==counter)
        {
            n[counter]=m[i];
            counter++;
        }
    }
    cout<<"the result is ";
    for(int i=0;i<counter;i++)
        cout<<n[i]<<" ";
    return 0;
}
