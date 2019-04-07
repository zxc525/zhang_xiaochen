#include <iostream>
#include<iomanip>
#include"Account.h"

using namespace std;

int main()
{
    double balance=10000;
    cout<<"当前账户余额是："<<balance<<endl;
    Account a(1000.0,200.0,balance);
    a.print();

}
