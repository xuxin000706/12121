#include <iostream>

using namespace std;
void zero(long bigIntegers[])
{
        for(int i=0;i<5;i++)

            cout<<bigIntegers[i]<<endl;

}
int add1AndSum(long oneTooSmall[])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {


        sum+=oneTooSmall[i];
    }
    return sum;
}

int main()
{
    int total=0;
    long a[5]={1,2,3,4,5};
    zero(a);
    total=add1AndSum(a);
    cout<<total;
}
