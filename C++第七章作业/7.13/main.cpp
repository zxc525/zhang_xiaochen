#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,20>a;
    for(int b=0;b<20;b++)
    {
        cin>>a[b];
    }

    array<int,20>c;
    int m=0;
    for(int i=0;i<20;i++)
    {
        int j=0;
        while(j<m)
        {
            if(a[i]==c[j])
            {
                cout<<c[j]<<endl;
                break;
            }

            j++;

        }

        if(j==m)
        {
            c[m]=a[i];
            m++;
        }



    }
    return 0;
}
