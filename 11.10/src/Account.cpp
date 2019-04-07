#include<iostream>
#include<stdexcept>
#include "Account.h"

using namespace std;

Account::Account(double a,double b,double balance )
{
    credit=a;
    debit=b;
    nowBalance=balance;


}

void Account::setCredit(double a)
{
    credit=a;
}

double Account::getCredit()const
{
    return credit;

}

void Account::setDebit(double b)
{
    if(b<=balance)
        debit=b;
    else
        throw invalid_argument("Debit amount exceeded account balance.");
}

double Account::getDebit()const
{
    return debit;
   ;
}

void Account::setBalance(double balance)
{
   if(balance>=0)
    nowBalance=balance;
   else
    throw invalid_argument("Balance is null.");
}

double Account::getBalance()const
{
    return nowBalance;

}


void Account::print()
{

    cout<<"存入金额："<<credit<<endl;
    cout<<"取出的金额是："<<debit<<endl;
    cout<<"此时的账户余额是："<<nowBalance+credit-debit<<endl;
}











