#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    array<unsigned int ,6> alphabet={1,2,3,4,5,6};
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    cout<<"元素6："<<setw(13)<<alphabet[5]<<endl ;


    array<unsigned int ,4>grades={1,2,3,4};
    int a=0;
    cout<<"输入一个数作为元素4:"<<endl;
    cin >>a;
    grades[3]=a;
    cout<<"元素4："<<grades[3]<<endl;



    array<int ,5>values;
    for (size_t i=0;i<values.size();++i)
        values[i]=8;
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for (size_t j=0;j<values.size();++j)
        cout<<setw(7)<<j<<setw(13)<<values[j]<<endl;
}
