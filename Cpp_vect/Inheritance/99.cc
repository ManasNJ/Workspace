
/* Function Overriding */

#include <iostream>
using namespace std;

class Base
{
    public:
            void test(){
                cout << "test in Base" << endl;
            }
};

class Derived:public Base
{
    public:
            void test(){
                cout << "test in Derived" << endl;
            }
};


int main()
{
    Derived d1;
    d1.test();          //Here we have test function in Derived class. Hence it will consider the test function of derived class.
    // But if there was no test function in derived class then test function inherited from base class would have been considered.
    //This concept is called function overriding. That is same function name, same arguments passed, same return type but in different classes.
    
    d1.Base::test(); //In this case it will call  base class test function.
}