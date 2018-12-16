#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a,double b)
{
      double c=sqrt(a*a+b*b);
      cout<<"三角形的斜边长="<<c<<endl;
      return 0;
}

int main()
{
    hypotenuse(3.0,4.0);
    hypotenuse(5.0,12.0);
    hypotenuse(8.0,15.0);
    return 0;
}
