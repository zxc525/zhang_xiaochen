#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int b=0;//bΪ����
   int c=0;
   int d=1;

   cout<<"����ʮ������=";
   cin>>a;

   while(a!=0)
   {
       b=a%2;
       a=(a-b)/2;//�˴�Ϊa��ȥ��������2�ĸ���a����ֵ
       c=c+b*d;
       d=d*10;
   }

   cout<<"��������="<<c<<endl;

   return 0;
}
