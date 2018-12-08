#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int j=0;
    int n=6;
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
    return 0;
}
