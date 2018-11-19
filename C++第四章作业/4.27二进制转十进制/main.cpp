#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int h=0;
    int m=0;
    int i=1;

    cout<<"二进制数=";
    cin>>a;

    while(a!=0)
    {
        m=a%10;
        h=h+m*i;

        a=(a-m)/10;
        i=i*2;
    }

    cout<<"十进制数="<<h<<endl;

    return 0;
}
