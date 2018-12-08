#include <iostream>
#include <bitset>


using namespace std;

int main()
{
    for(int i=1;i<=256;i++)
    {
        cout<<bitset<8>(i)<<"  ";
        cout<<oct<<i<<"  ";
        cout<<hex<<i<<endl;
    }
    return 0;
}
