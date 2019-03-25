#include <iostream>
#include"Matrix.h"
using namespace std;

int main()
{
    int b=0,c=0;
    Matrix matrix(2,2);
    b=matrix.gethang();
    c=matrix.getlie();
    int d=b*c;
    int a[d]={};
        for(int i=0;i<d;i++)
    {
        cin>>a[i];
    }
    cout<<"¾ØÕóÊÇ"<<a[d]<<endl;



    return 0;
}
