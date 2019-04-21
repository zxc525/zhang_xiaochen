#include<iostream>
#include<stdexcept
#include "Salariedmployee.h"
using namespace std;

Salariedmployee::Salariedmployee(string &first,string &last,string &ssn,double salary)
:Employee(first,last,ssn)
{
   setWeeklySalary(salary);
}


void Salariedmployee::setWeeklySalary(double salary)
{
    if(salary>=0.0)
        weeklySalary=salary;
    else
        throw invalid_argument("Weekly salary must be >= 0.0");
}

double Salariedmployee::getWeeklySalary()
{
    return weeklySalary;
}

double Salariedmployee::earnings()const;
{
    return getWeeklySalary();
}

void Salariedmployee::print()const
{
    cout<<"salaried employee:";
    Employee::print();
    cout<<"\nweekly salary:"<<getWeeklySalary();
}




