#include <iostream>
#include<iomanip>
#include"Package.h"

using namespace std;

int main()
{
    Package package("������","ǰ���·579��ɽ���Ƽ���ѧ","�ൺ��","ɽ��ʡ","266000",100,2);

    cout<<"Name is "<<package.getName()
        <<"\nAddress is "<<package.getAddress()
        <<"\nCity is "<<package.getCity()
        <<"\nSate is "<<package.getSate()
        <<"\nPostalCode is "<<package.getPostalCode()
        <<"\nWeight is "<<package.getWeight()
        <<"\nCostPerOunce is "<<package.getCostPerOunce()<<endl;

    cout<<"\nPostage is "<<package.calculateCost()<<endl;
}
