#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cout<<"������һ��5λ��:";
    cin>>a;
    int b=0;
    int c=0;
    c=a;

    while (c!=0)
    {

        b=b*10+c%10;
        c/=10;
    }

    if(a==b)
    {
        cout<<"������ǻ�������";
    }

    if(a!=b)
    {
        cout<<"��������ǻ�������";
    }

    return 0;
}
