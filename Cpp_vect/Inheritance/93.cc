
#include<iostream>
using namespace std;

class Base{

};

class Derived : public Base{ //Mode of inheritance is public.

};

main()
{
    cout << " Base - " << sizeof(Base) << endl; //Data members = 0, but single empty class size should be atleast 1
    cout << " Derived - " << sizeof(Derived) << endl; //Base class Data members = 0, Derived class members =0, 0+0 = 0 , but minimum size of empty class should be 1      
}

//therefore , Size of derived class : 1 , Size of base class : 1