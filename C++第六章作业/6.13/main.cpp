#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a[5]={1.1,2.4,3.5,4.8,5.3};
    for(int i=0;i<5;i++)
    {
        cout<<"ԭʼֵ="<<a[i]<<"\t"<<"������ֵ="<<floor(a[i]+0.5)<<endl;
    }
    return 0;
}
