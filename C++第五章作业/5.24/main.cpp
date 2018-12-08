#include <iostream>

using namespace std;

int main()
{
    for(int a=1;a<=19;a++)
    {
        if(a%2!=0)
        {


         int i=0;
         int j=0;
         int n=a;
         for(i=1;i<=n;i++)
             {
               for(j=1;j<=n-i;j++)
                 cout<<" ";
               for(j=1;j<=2*i-1;j++)
                 cout<<"*";
                 cout<<endl;
             }
        for(i=1;i<=n-1;i++)
             {
               for(j=1;j<=i;j++)
                 cout<<" ";
               for(j=1;j<=2*(n-i)-1;j++)
                 cout<<"*";
                cout<<endl;

              }
          }
    }
    return 0;
}
