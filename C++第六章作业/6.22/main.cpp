#include <iostream>

using namespace std;

void a(int side)
{
    for(int n=1;n<=side;n++)
    {

          for(int i=1;i<=side;i++)
          {
               cout<<"*";
          }
          cout<<endl;
    }
}

int main()
{
    a(4);
    return 0;
}
