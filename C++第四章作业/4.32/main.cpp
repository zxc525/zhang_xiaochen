#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;

    cout<<"��һ����:";
    cin>>a;
    cout<<"�ڶ�����:";
    cin>>b;
    cout<<"��������:";
    cin>>c;

    if(a+b>c)
        cout<<"����һ�������Ρ�"<<endl;
    else
        cout<<"�ⲻ��һ�������Ρ�"<<endl;

    return 0;
}
