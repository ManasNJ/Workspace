#include <iostream>

using namespace std;

class Base{

    public:
    int amt;
    virtual void Func1()=0;

};

class Derived: public Base{

    public:
    void Func1(){
        amt= 5000;
    }

};

int main()
{
    // Base b1;    --> You can't create an Abstract class Object.
    // Derived d1;   --> Similarly derived class is derivd from base class which is abstract
                    // Henced Derived class will also behave like an abstract class. and can't create an object. 

    Derived d2;         // For a derrived class from Abstract class there should atleast be one function definition on ly then u can create its object.
    d2.Func1();                    

    // You can also access the Derived class Function definition through Base class pointer.
    // By assigning &Derived class to Base class ptr & runtime binding.
}