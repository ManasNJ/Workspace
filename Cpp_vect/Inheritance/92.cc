
#include<iostream>
using namespace std;

class Base{

};

class Derived : public Base{ //Mode of inheritance is public.
int m, n;
};

main()
{
    cout << " Base - " << sizeof(Base) << endl;
    cout << " Derived - " << sizeof(Derived) << endl;        
}

//Size of derived class : 8 (Because Empty Class's size will be counted 1 only if object is created. Secondly, derived class size is calculated on the basis of "Base class DaTa Members(which is 0 here) + Derived class Data Members", not "Base class size + Derived class Size"),
// Size of base class : 1 (because its an empty class for which default size is 1)