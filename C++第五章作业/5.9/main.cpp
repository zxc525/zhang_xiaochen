#include <iostream>

using namespace std;

int main()
{
    int a=1;

    for(int b=1;b<=15;b++)
    {
        if(b%2!=0)
            a*=b;
    }

    cout<<"ÆæÊý³Ë="<<a;
    return 0;
}
