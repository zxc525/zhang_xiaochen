#ifndef SALARIEDMPLOYEE_H
#define SALARIEDMPLOYEE_H

#include<string>
#include"Employee.h"

using namespace std;

class Salariedmployee:public Employee
{
    public:
        Salariedmployee(string &,string &,string &,double=0.0);
        virtual ~Salariedmployee(){};

        void setWeeklySalary(double);
        double getWeeklySalary();

        virtual double earnings()const override;
        virtual void print()const override;
    private:
        double weeklySalary;
};

#endif // SALARIEDMPLOYEE_H
