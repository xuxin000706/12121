
#include <string>
#include"Account.h"
#include<iostream>
using namespace std;

Account::Account(int initialBalance)
{
    balance=0;
    if(initialBalance>0)
        balance=initialBalance;
    if(initialBalance<0)
        cout<<"初始余额不能为负"<<endl;
}
void Account::credit(int amout)
 {
     balance=balance+amout ;
 }
void Account::debit(int amount)
{
    if(amount>balance)
        cout<<"金额超出了帐户余额"<<endl;
    if(amount<=balance)
        balance=balance-amount ;
}
int Account::getBalance()
{
    return balance;
}
