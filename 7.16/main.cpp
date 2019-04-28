#include <iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    const long int ROLLS=36000;
    const int SIZE=13;

    int expected[SIZE]={0,0,1,2,3,4,5,6,5,4,3,2,1};
    int x=0;
    int y=0;
    int sum[SIZE]={};

    srand(time(0));
    for(long int i=1;i<ROLLS;i++)
    {
        x=1+rand()%6;
        y=1+rand()%6;
        sum[x+y]++;
    }
    cout <<setw(10)<<"���ܳ��ֵĺ�ֵ"<<setw(16)<<"���ִ���"<<setw(20)<<"���Ƴ��ָ���"<<setw(21)<<"��ʵ���ָ���\n"<<fixed<<showpoint;
    for(int j=2;j<SIZE;j++)
        cout<<setw(10)<<j<<setw(20)<<sum[j]<<setprecision(3)<<setw(19)<<100.0*expected[j]/36<<"%"<<setprecision(3)<<setw(19)<<100.0*sum[j]/ROLLS<<"%\n";
}
