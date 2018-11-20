#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"x=fabs(7.5)="<<fabs(7.5)<<endl;
    cout<<"x=floor(7.5)="<<floor(7.5)<<endl;
    cout<<"x=fabs(0.0)="<<fabs(0.0)<<endl;
    cout<<"x=ceil(0.0)="<<ceil(0.0)<<endl;
    cout<<"x=fabs(-6.4)="<<fabs(-6.4)<<endl;
    cout<<"x=ceil(-6.4)="<<ceil(-6.4)<<endl;

    int a=0;
    a=floor(-5.5)+8;

    double b=0;
    b=fabs(a)*-1;

    int c=0;
    c=ceil(b);
    cout<<"x=ceil(-fabs(-8+floor(-5.5))="<<c<<endl;

    return 0;
}


