#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
 Account account1(50) ;
 Account account2(40) ;
 cout<<"账户1余额: $"<<account1.getBalance()<<endl;
 cout<<"账户2余额 balance: $"<<account2.getBalance()<<endl;

 int withdrawalAmount;
 cout<<"提款金额1为:";
 cin>>withdrawalAmount;
 cout<<"attempting to subtract"<<withdrawalAmount<<"from account1 balance ";
account1.debit(withdrawalAmount);
cout<<"account1 balance: $"<<account1.getBalance()<<endl;
cout<<"account2 balance: $"<<account2.getBalance()<<endl;
cout<<"提款金额2为:";
cin>>withdrawalAmount;
cout<<"attempting to subtract"<<withdrawalAmount<<"from account2 balance ";
account2.debit(withdrawalAmount);
cout<<"账户1余额: $"<<account1.getBalance()<<endl;
cout<<"账户2余额；$"<<account2.getBalance()<<endl;
}

