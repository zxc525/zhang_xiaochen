#include <iostream>
#include<iomanip>
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
    CommissionEmployee commissionEmployee("Sue","Jones","222-22-2222",10000,0.06);

    CommissionEmployee *commissionEmployeePtr=nullptr;

    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","333-33-3333",5000,0.04,300);

    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr=nullptr;
    cout<<fixed<<setprecision(2);

    cout<<"Print base-class and derived-class objects:\n\n";
    commissionEmployee.print();
    cout<<"\n\n";
    basePlusCommissionEmployee.print();

    commissionEmployeePtr=&commissionEmployee;
    cout<<"\n\n\nCalling print with base-class print to"
        <<"\nbase-object invokes base-class print function:\n\n";
    commissionEmployeePtr->print();


    basePlusCommissionEmployeePtr=&basePlusCommissionEmployee;
    cout<<"\n\n\nCalling print with derived-class print to"
        <<"\nderived-object invokes derived-class print function:\n\n";
    basePlusCommissionEmployeePtr->print();

    commissionEmployeePtr=&basePlusCommissionEmployee;
    cout<<"\n\n\nCalling print with base-class print to"
        <<"derived-object\ninvokes derived-class print"
        <<"function on that derived-class object:\n\n";
    commissionEmployeePtr->print();
    cout<<endl;

}
