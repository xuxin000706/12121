#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   double x,a,b,c,d,e,f,g,h,i,j;

   cout <<"输入任意值:"<<endl;
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
   cout<<"x取整为不小于x的最小整数:"<<a<<"\nx的三角余弦:"<<b<<"\n指数函数为:"<<c<<"\nx的绝对值:"<<d<<endl;
   cout<<"x取整为不大于x的最大整数:"<<e<<"\nx的自然对数:"<<f<<"\nx（底数为10）的对数:"<<g<<endl;
   cout<<"x的三角正弦为:"<<h<<"\nx的平方根:"<<i<<"\nx的三角正切:"<<j<<endl;
}
