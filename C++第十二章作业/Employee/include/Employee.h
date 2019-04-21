#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>

using namespace std;
class Employee
{
    public:
        Employee(const string &,const string &,const string &)
        virtual ~Employee(){}

        void setFirstName(const string &);
        string getFirstName();

        void setLastName(const string &);
        string getLastName();

        void setSocialSecurityNumber(const string &);
        string getSocialSecurityNumber();

        virtual double earnings()const=0;
        virtual void print()const;

    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;
};

#endif // EMPLOYEE_H
