#include <iostream>

using namespace std;

int main()
{
    double n=0;
    cout<<"�Ǹ�����:";
    cin>>n;
    double a=1;
    double e=1;
    double b=0;
    double c=0;
    c=n;

while(n>0)
{
        while (n>0)
       {
            a*=n;
            n--;
       }

       e=e+(1/a);
       c=c-1;
       n=c;
}
cout<<"ֵ="<<e<<endl;

return 0;
}
