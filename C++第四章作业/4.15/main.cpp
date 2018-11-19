#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=0;


   cout<<"Enter sales in dollars(-1 to quit):";
   cin>>a;

while(a!=-1)
{

   b=(a*0.09)+200;

   cout<<"Salary is:"<<b<<endl;

   cout<<"Enter sales in dollars(-1 to end):";
   cin>>a;


}

return 0;

}
