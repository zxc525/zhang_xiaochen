#include <iostream>

using namespace std;

int main()
{
    long valuel1,valuel2;
    valuel1=200000;
    long *longPtr;
    longPtr=&valuel1;

    cout<<*longPtr<<endl;

    valuel2=*longPtr;

    cout<<valuel2<<endl;

    cout<<&valuel1<<endl;
    cout<<&*longPtr<<endl;

}
