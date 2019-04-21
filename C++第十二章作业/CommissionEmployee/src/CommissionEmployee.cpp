#include<iostream>
#include<stdexcept>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate)
{
    firstname=first;
    lastname=last;
    socialSecurityNumber=ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setFirstName(const string &first)
{
    firstname=first;
}

string CommissionEmployee::getFirstName()const
{
    return firstname;
}

void CommissionEmployee::setLastName(const string &last)
{
    lastname=last;
}

string CommissionEmployee::getLastName()const
{
    return lastname;
}

void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber=ssn;
}

string CommissionEmployee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double sales)
{
    if(sales>=0)
       grossSales=sales;
    else
        throw invalid_argument("Gross sales must be >= 0");

}


double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate>0&&rate<1)
        commissionRate=rate;
    else
        throw invalid_argument("Commission rate must be > 0 and <1");
}

double CommissionEmployee::getCommissionRate()const
{
    return commissionRate;
}

double CommissionEmployee::earnings()const
{
    return commissionRate*grossSales;
}

void CommissionEmployee::print()const
{
    cout<<"commission employee: "<<firstname<<" "<<lastname<<"\nsocial security number: "<<socialSecurityNumber
        <<"\ngross sales: "<<grossSales
        <<"\ncommission rate: "<<commissionRate;
}












