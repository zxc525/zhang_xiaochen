#include <iostream>

using namespace std;

int main()
{
   int counter=1;
   int number=0;
   cout<<"请输入一个数:";
   cin>>number;
   int largest;
   int number1=0;
   largest=number;

   while(counter<10)
   {
       counter++;


       cout<<"下一个数:";
       cin>>number1;

       if(largest>number1)
        {
            cout<<"最大值为:"<<largest<<endl;
        }

       if(largest<number1)
        {
            largest=number1;
            cout<<"最大值为："<<largest<<endl;
        }

   }

   return 0;
}
