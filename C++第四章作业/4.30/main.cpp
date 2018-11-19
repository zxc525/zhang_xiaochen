#include <iostream>

using namespace std;

int main()
{
    double r=0;
    cout<<"圆的半径:";
    cin>>r;
    double D=0;
    double C=0;
    double S=0;

    D=2*r;
    cout<<"直径="<<D<<endl;
    C=2*3.14159*r;
    cout<<"周长="<<C<<endl;
    S=3.14159*r*r;
    cout<<"面积="<<S<<endl;

    return 0;
}
