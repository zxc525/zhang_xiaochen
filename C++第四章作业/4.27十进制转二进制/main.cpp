#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int b=0;//b为余数
   int c=0;
   int d=1;

   cout<<"输入十进制数=";
   cin>>a;

   while(a!=0)
   {
       b=a%2;
       a=(a-b)/2;//此处为a减去余数除以2的赋予a的新值
       c=c+b*d;
       d=d*10;
   }

   cout<<"二进制数="<<c<<endl;

   return 0;
}
