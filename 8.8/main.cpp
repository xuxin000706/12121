#include <iostream>

using namespace std;

int main()
{
    int SIZE=5;
    unsigned int values[SIZE]={2,4,6,8,10};
    unsigned int*vPtr=values;
    for(int i=0;i<5;i++)//指针下标法
        cout<<vPtr[i]<<endl;

    for(int i=0;i<SIZE;i++)//数组下标法
        cout<<values[i]<<endl;
    for(int i=0;i<5;i++)//内置数组名
        cout<<*(values+i)<<endl;
    for(int i=0;i<SIZE;i++)//指针表示法
    {
        cout<<*(vPtr+i)<<endl;
    }




    return 0;
}
