#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int j=0;
    int n=10;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=2*i-1;j++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
