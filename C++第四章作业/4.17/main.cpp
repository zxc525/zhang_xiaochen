#include <iostream>

using namespace std;

int main()
{
   int counter=1;
   int number=0;
   cout<<"������һ����:";
   cin>>number;
   int largest;
   int number1=0;
   largest=number;

   while(counter<10)
   {
       counter++;


       cout<<"��һ����:";
       cin>>number1;

       if(largest>number1)
        {
            cout<<"���ֵΪ:"<<largest<<endl;
        }

       if(largest<number1)
        {
            largest=number1;
            cout<<"���ֵΪ��"<<largest<<endl;
        }

   }

   return 0;
}
