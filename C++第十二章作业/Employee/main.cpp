#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "Salariedmployee.h"
using namespace std;


void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);
int main()
{
    cout<<fixed<<setprecision(2);

    Salariedmployee salariedmployee("John","Smith","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue","John","333-33-3333",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",.04,300);

    cout<<"Employees processed individually using static binding:\n\n";

    return 0;
}
