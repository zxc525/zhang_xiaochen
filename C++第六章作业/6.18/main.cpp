#include <iostream>

using namespace std;

int integerPower(int base,int exponent)
{

    int b=1;
    for(int a=1;a<=exponent;a++)
    {
        b*=base;

    }
    cout<<b;
    return 0;
}

int main()
{
    integerPower(3,4);
    return 0;
}
