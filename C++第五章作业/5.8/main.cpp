#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int min=0;
    cin>>a;
    min=a;
    int c=0;
    for(int b=1;b<a;b++)
    {
        cin>>c;
        if(c<min)
            min=c;
        else
            min=min;
    }

    cout<<"min="<<min;
    return 0;
}
