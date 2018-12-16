#include <iostream>

using namespace std;

int isewen(int b)
{
    cout<<b<<endl;
    if(b%2==0)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}

int main()
{
   int a[5];

   for(int c=0;c<5;c++)
   {
       cin>>a[c];
   }

   for(int i=0;i<5;i++)
   {
       isewen(a[i]);
   }
    return 0;
}
