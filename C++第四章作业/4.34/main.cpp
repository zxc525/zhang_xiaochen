#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout<<"非负整数:";
    cin>>n;
    int a=1;

    if(n==0)
      cout<<"阶乘的值="<<1<<endl;

if(n>0)
    {
      while (n>0)
       {

            a*=n;
            n--;

       }

    cout<<"阶乘的值="<<a<<endl;
    }

return 0;
}
