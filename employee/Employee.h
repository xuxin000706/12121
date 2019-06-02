#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include "Date.h"
class Employee
{
    public:
    Employee(const std::string&,const std::string &,const std::string&);
    virtual ~Employee(){}
    void setFirstName(const std::string&);
    std::string getFirstName()const;
    void setLastName(const std::string&);
    std::string getLastName()const;
    void setSocialSecurityNumber(const std::string&);
    std::string getSocialSecurityNumber()const;
    virtual double earnings()const=0;
    virtual void print()const;
    private:
    std::string firstName;
    std::string lastName;
    std::string SocialSecurityNumber ;
    Date birthDate;


};



#endif // EMPLOYEE_H_INCLUDED
