#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout<<"�Ǹ�����:";
    cin>>n;
    int a=1;

    if(n==0)
      cout<<"�׳˵�ֵ="<<1<<endl;

if(n>0)
    {
      while (n>0)
       {

            a*=n;
            n--;

       }

    cout<<"�׳˵�ֵ="<<a<<endl;
    }

return 0;
}
