#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   double x,a,b,c,d,e,f,g,h,i,j;

   cout <<"��������ֵ:"<<endl;
   cin>>x;
   a=ceil(x);
   b=cos(x);
   c=exp(x);
   d=fabs(x);
   e=floor(x);
   f=log(x);
   g=log10(x);
   h=sin(x);
   i=sqrt(x);
   j=tan(x);
   cout<<"xȡ��Ϊ��С��x����С����:"<<a<<"\nx����������:"<<b<<"\nָ������Ϊ:"<<c<<"\nx�ľ���ֵ:"<<d<<endl;
   cout<<"xȡ��Ϊ������x���������:"<<e<<"\nx����Ȼ����:"<<f<<"\nx������Ϊ10���Ķ���:"<<g<<endl;
   cout<<"x����������Ϊ:"<<h<<"\nx��ƽ����:"<<i<<"\nx����������:"<<j<<endl;
}
