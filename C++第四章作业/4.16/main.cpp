#include <iostream>

using namespace std;

int main()
{
    double a=0;
    cout<<"Enter hours worked(-1 to quit):";
    cin>>a;

    while (a!=-1)
    {
        double b=10.00;
        cout<<"Enter hourly rate of the employee($00.00):"<<b<<endl;

        if(a<=40)
        {
            cout<<"Salary is $"<<a*b<<endl<<endl;

        }
        else
        {
            cout<<"Salary is $"<<40*b+(a-40)*15<<endl<<endl;

        }

        cout<<"Enter hours worked(-1 to quit):";
        cin>>a;
    }

    return 0;
}
