/* NEW operator in C++ */

#include<iostream>
using namespace std;
int main()
{
    int *p;
    p = new int;            //in malloc function we had to typecast, but new operator will automatically return the applicable dataype's pointer.
    cout<<"Enter Data"<<endl;
    cin>>*p;
    cout<<"*p - "<<*p<<endl;
    delete p;               //delete is also an operator.
}