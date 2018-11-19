#include <iostream>

using namespace std;

int main()
{
   int counter=2;
   int number=0;
   int number1=0;
   cout<<"请输入2个数:"<<endl;
   cin>>number>>number1;
   int largest;
   int largest1;
   largest=number;
   largest1=number1;
   int number2;

   while(counter<10)
   {
       counter++;


       cout<<"下一个数:";
       cin>>number2;

       if(largest>number2&&largest1>number2)
        {
            cout<<"最大值为:"<<largest<<"\t"<<largest1<<endl;
        }


      if(largest>number2&&number2>largest1)
        {
           largest1=number2;
           cout<<"最大值为:"<<largest<<"\t"<<largest1<<endl;
        }

      if(largest1>number2&&number2>largest)
        {
           largest=number2;
           cout<<"最大值为:"<<largest<<"\t"<<largest1<<endl;
        }


      if(number2>largest&&largest>largest1)
        {
             largest1=number2;
           cout<<"最大值为:"<<largest<<"\t"<<largest1<<endl;
        }

        if(number2>largest1&&largest1>largest)
        {
           largest=number2;
           cout<<"最大值为:"<<largest<<"\t"<<largest1<<endl;
        }





   }

   return 0;
}
