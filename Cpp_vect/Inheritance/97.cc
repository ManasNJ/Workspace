/* 

Single Inheritance 
When a derived class is generated from only one base class , then it is called as Single Inheritance.

*/

#include <iostream>
using namespace std;

class Base{

    int x;
    
    public:
    Base(){
        cout <<"Base Constructor"<< endl;
        x = 10;
    }

    ~Base(){
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base{

    int y;
    
    public:
    Derived(){
        cout <<"Derived Constructor"<< endl;
        y = 20;
    }

    ~Derived(){
        cout << "Derived Destructor" << endl;
    }
};

int main(){
    
    Derived d1;  /* when Derived class object is created, derived class constructor
    is called first. But derived class is inherited from Base class. Hence When Derived calss constructor 
    is called, internally it will call base class constructor first, where x will get initialized & further
    again in reverse order destructors will be called. that is derived class destructor first & Base class
    destructor next. */

}