#include <iostream>

using namespace std;

int main()
{
    int values[5]={2, 4, 6, 8, 10};
    int *vPtr =values;
    for(int value : values)
        cout <<value<<" ";

    vPtr=&values[0];
    vPtr=values;

    cout <<vPtr+3<<endl;
    vPtr=&values[4];
    vPtr-=4;

    return 0;
}
