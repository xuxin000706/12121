#include <iostream>
#include"3.15.h"
using namespace std;

int main()
{
Date date(04,8,2000);
cout<<"Month:"<<date.getMonth()<<endl;
cout<<"Day"<<date.getDay()<<endl;
cout<<"Year"<<date.getYear()<<endl;
cout<<"ԭʼʱ��:"<<endl;
date.displayDate();
date.setMonth(4);
date.setDay(4);
date.setYear(1999);
cout<<"��ʱ��:"<<endl;
date.displayDate();
}
