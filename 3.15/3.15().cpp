#include<iostream>
#include"3.15.h"
using namespace std;
Date::Date(int x ,int y,int z)
{
setMonth(x);
setDay(y);
setYear(z);
}
void Date::setMonth(int x )
{
    month=x;
    if(month<1)
        month=1;
    if(month>12)
        month=1;
}
int Date::getMonth()
{
    return month ;
}
void Date::setDay(int y)
{
    day=y;
}
int Date::getDay()
{
    return day;
}
void Date::setYear(int z)
{
    year=z;
}
int Date::getYear()
{
    return year;
}
void Date::displayDate()
{
    cout <<month<<"/"<<day<<"/"<<year<<endl;
}
