#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
 Account account1(50) ;
 Account account2(40) ;
 cout<<"�˻�1���: $"<<account1.getBalance()<<endl;
 cout<<"�˻�2��� balance: $"<<account2.getBalance()<<endl;

 int withdrawalAmount;
 cout<<"�����1Ϊ:";
 cin>>withdrawalAmount;
 cout<<"attempting to subtract"<<withdrawalAmount<<"from account1 balance ";
account1.debit(withdrawalAmount);
cout<<"account1 balance: $"<<account1.getBalance()<<endl;
cout<<"account2 balance: $"<<account2.getBalance()<<endl;
cout<<"�����2Ϊ:";
cin>>withdrawalAmount;
cout<<"attempting to subtract"<<withdrawalAmount<<"from account2 balance ";
account2.debit(withdrawalAmount);
cout<<"�˻�1���: $"<<account1.getBalance()<<endl;
cout<<"�˻�2��$"<<account2.getBalance()<<endl;
}

