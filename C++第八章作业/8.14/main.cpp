#include <iostream>

using namespace std;

int mystery2(const char *s)
{
    int x;
    for(x=0; *s!=0; ++s)
        ++x;

    return x;
}

int main()
{
    char string1[80];

    cout <<"Enter a string: ";
    cin >>string1;
    cout <<mystery2(string1)<<endl;
    return 0;
}
