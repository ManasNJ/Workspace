
/* To use Virtual Functions without any errors, Virtual Functions should be defined in public section 
and even the mode of inheritance should be public. */

#include <iostream>
using namespace std;

class Base{

    public :

    virtual void test(){
        cout << "Test in Base" << endl;
    }

};

class Derived: public Base{
    
    void test(){
        cout << "Test in Derived" << endl;
    }

};

int main ()
{
    Base *bptr;
    Derived d1;
    bptr = &d1;

    bptr -> test();
}