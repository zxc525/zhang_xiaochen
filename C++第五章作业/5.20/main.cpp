#include <iostream>

using namespace std;

int main()
{
    int side1=0;
    int side2=0;
    int hy=0;
    for(side1=1;side1<=500;side1++)
    {
         for(side2=1;side2<=500;side2++)
         {
             for(hy=1;hy<=500;hy++)
             {
                 if(side1*side1+side2*side2==hy*hy)
                    cout<<side1<<"\t"<<side2<<"\t"<<hy<<endl;
             }
         }
    }
    return 0;
}
