#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    array<unsigned int ,10>counts;
    for (size_t i=0;i<counts.size();++i)
        counts[i]=0;
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for (size_t j=0;j<counts.size();++j)
        cout<<setw(7)<<j<<setw(13)<<counts[j]<<endl;



    array<unsigned int ,15>bonus={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int a=0;
    for (size_t i=0;i<bonus.size();++i)
        {
            a=bonus[i]+1;
            cout<<"加完1后："<<a<<endl;
        }



     array<double ,12>monthlytemperatures;
     double r,b,c,d,e,f,g,h,i,j,k,l;
     cout<<"输入12个元素:"<<endl;
     cin >>r>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;



     array<unsigned int ,5>bestScores={1,2,3,4,5};
     cout<<"Element"<<setw(13)<<"Value"<<endl;
    for (size_t k=0;k<bestScores.size();++k)
        cout<<setw(7)<<k<<setw(13)<<bestScores[k]<<endl;




}
