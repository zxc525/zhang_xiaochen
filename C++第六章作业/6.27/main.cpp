#include <iostream>

using namespace std;

double a()
{
    double a[3],min;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    for(int n=1;n<=2;n++)
    {
        if(a[n]<min)
            min=a[n];
    }

    cout<<min;

    return 0;
}

int main()
{
    a();
    return 0;
}
