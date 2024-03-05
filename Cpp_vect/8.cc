#include<iostream>
using namespace std;
int main()
{
    int x=100, y=200;
    int* p =&x;
    int* &rp=p;

    rp=&y;
    cout<< "*rp = "<<*rp<<endl;
    cout<< "*p = "<<*p<<endl;

    *rp=300;
    cout<<"x- " << x <<endl;
    cout<<"y- " << y <<endl;
}