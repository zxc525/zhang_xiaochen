#include <iostream>
#include<iomanip>
#include"Account.h"

using namespace std;

int main()
{
    double balance=10000;
    cout<<"��ǰ�˻�����ǣ�"<<balance<<endl;
    Account a(1000.0,200.0,balance);
    a.print();

}
