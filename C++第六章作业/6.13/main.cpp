#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a[5]={1.1,2.4,3.5,4.8,5.3};
    for(int i=0;i<5;i++)
    {
        cout<<"原始值="<<a[i]<<"\t"<<"舍入后的值="<<floor(a[i]+0.5)<<endl;
    }
    return 0;
}
