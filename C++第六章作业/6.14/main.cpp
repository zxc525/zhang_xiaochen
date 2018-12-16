#include <iostream>
#include <cmath>
using namespace std;


    double roundToInteger(double x)
    {
        double y=0;
        y=floor(x+0.5);
        cout<<x<<"\t"<<y<<endl;
        return 0;

    }

    double roundToTenths(double x)
    {
        double y=0;
        y=floor(x*10+0.5)/10;
        cout<<x<<"\t"<<y<<endl;
         return 0;
    }

    double roundToHundredths(double x)
    {
        double y=0;
        y=floor(x*100+0.5)/100;
        cout<<x<<"\t"<<y<<endl;
         return 0;
    }

    double roundToThousandths(double x)
    {
        double y=0;
        y=floor(x*1000+0.5)/1000;
        cout<<x<<"\t"<<y<<endl;
         return 0;
    }

int main()
{
    roundToInteger(9.4567);
    roundToTenths(9.4567);
    roundToHundredths(9.4567);
    roundToThousandths(9.4567);

    return 0;
}



