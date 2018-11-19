#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cout<<"请输入一个5位数:";
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
        cout<<"这个数是回文数。";
    }

    if(a!=b)
    {
        cout<<"这个数不是回文数。";
    }

    return 0;
}
