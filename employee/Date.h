#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include<array>
class Date
{
    friend std::ostream &operator<<(std::ostream &,const Date&);
public:
    Date(int m=1,int d=1,int y=1900 );
    void setDate(int,int,int);
    Date &operator++();
    Date operator++(int);
    Date operator+=(unsigned int);
    static bool leapyear(int);
    bool endOfMonth(int)const;
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
    void helpIncrement();
    static const std::array<unsigned int,13>days;

};



#endif // DATE_H_INCLUDED
