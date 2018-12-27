#include <iostream>
#include <array>
#include  <iomanip>
using namespace std;

int main()
{
    array<int,10>counts;
    for(int a=0;a<10;a++)
    {
        counts[a]=0;
        cout<<counts[a]<<setw(5);
    }

    cout<<endl;

    array<int,15>bonus;
    for(int b=0;b<15;b++)
    {
        bonus[b]=0;
        bonus[b]++;
        cout<<bonus[b]<<setw(5);
    }

    cout<<endl;

    array<double,12>monthlyTemperatures;
    for(int c=0;c<12;c++)
    {
        cin>>monthlyTemperatures[c];
    }
    for(int d=0;d<12;d++)
    {
        cout<<monthlyTemperatures[d]<<setw(5);
    }

    cout<<endl;

    array<int,5>bestScores={1,2,3,4,5};
    for(int a:bestScores)
        cout<<a<<endl;


    return 0;
}
