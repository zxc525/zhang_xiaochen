#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>

using namespace std;
class Account
{
    public:
         double balance;

         Account(double,double,double);

         void setCredit(double);
         double getCredit()const;

         void setDebit(double);
         double getDebit()const;

         void setBalance(double);
         double getBalance()const;

         void print();


    private:
        double credit;
        double debit;
        double nowBalance;


};

#endif // ACCOUNT_H
