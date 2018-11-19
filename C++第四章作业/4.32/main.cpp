#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;

    cout<<"第一条边:";
    cin>>a;
    cout<<"第二条边:";
    cin>>b;
    cout<<"第三条边:";
    cin>>c;

    if(a+b>c)
        cout<<"这是一个三角形。"<<endl;
    else
        cout<<"这不是一个三角形。"<<endl;

    return 0;
}
