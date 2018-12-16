#include <iostream>

using namespace std;

void a(int side)
{
    string fillCharacter;
    cin>>fillCharacter;
    for(int n=1;n<=side;n++)
    {

          for(int i=1;i<=side;i++)
          {
               cout<<fillCharacter;
          }
          cout<<endl;
    }
}

int main()
{
    int b;
    cin>>b;
    a(b);
    return 0;
}
