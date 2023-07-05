#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int *p;
    int *q;
    p=&a;
    q=&b;
    a=2;
    b=5;
    // *p=3;
    c= *p+*q;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of a from the "<<*p<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the add of a in"<<&a<<"the value of the pointer is "<<p;
    return 0;
}