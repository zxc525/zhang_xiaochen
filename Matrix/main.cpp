#include <iostream>
#include"Matrix.h"


using namespace std;

int main()
{
    int a=0;
    int b=0;

    cin>>a;
    cin>>b;

    double e[a][b];
    double f[a][b];

    for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cin>>e[i][j];
            }
        }

   for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cout<<e[i][j]<<" ";
            }

            cout<<endl;
        }


        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cin>>f[i][j];
            }
        }

   for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cout<<f[i][j]<<" ";
            }

            cout<<endl;
        }


cout<<e[a][b]+f[a][b];

    return 0;
}

