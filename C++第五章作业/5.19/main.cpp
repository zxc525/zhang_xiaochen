#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double b=0;

    for(double i=1;i<=1000;i++)
    {


        b=b+(4/(2*i-1))*pow(-1,i+1);
        cout<<"¦ÐµÄ½üËÆÖµ="<<b<<endl;
    }
    return 0;

}
