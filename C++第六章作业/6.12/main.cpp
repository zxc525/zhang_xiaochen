#include <iostream>

using namespace std;

double calculateCharges(double hour)
{

    double charge;

    if(hour<=3)
    {
        charge=2;
    }
    if(hour>3&&hour<=19)
    {
       charge=(hour-3)*0.5+2;
    }
    if(hour>19&&hour<=24)
    {
        charge=10;
    }

    return charge;

}
int main()
{
    cout<<"Car"<<"\tHour"<<"\tCharge"<<endl;
    cout<<1<<"\t"<<1.5<<"\t"<<calculateCharges(1.5)<<endl;
    cout<<2<<"\t"<<4.0<<"\t"<<calculateCharges(4.0)<<endl;
    cout<<3<<"\t"<<24.0<<"\t"<<calculateCharges(24.0)<<endl;
    cout<<"TATAL"<<"\t"<<1.5+4.0+24.0<<"\t"<<calculateCharges(1.5)+calculateCharges(4.0)+calculateCharges(24.0)<<endl;

    return 0;
}
