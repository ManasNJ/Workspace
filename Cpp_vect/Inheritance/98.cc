/* 
Initializing using parameterized constructor & If both classes have same function name
*/

/* 
Function Overriding :
Same function with same parameters but in different classes is called function overridding.
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

    Base(int a){
        cout <<"Base Parameterized Constructor"<< endl;
        x = a;
    }

    ~Base(){
        cout << "Base Destructor" << endl;
    }

    void get_data(){
        cout << "x -" << x << endl;
    }

};

class Derived : public Base{

    int y;
    
    public:
    Derived(){
        cout <<"Derived Constructor"<< endl;
        y = 20;
    }

    Derived(int a, int b):Base(a){  //D1 object will call Derived constructor, which further calls Base's Parameterized constructor.
        cout << "Parameterized Constructor" <<endl;
        y = b;
    }

    ~Derived(){
        cout << "Derived Destructor" << endl;
    }

    void get_data(){
        //get_data(); This will lead to 
        Base::get_data(); //this will call Base class's get data function.
        cout << "y -" << y << endl;
    }
};

int main(){
    
    Derived d1(100,200);  /* when Derived class object is created, derived class constructor
    is called first. But derived class is inherited from Base class. Hence When Derived calss constructor 
    is called, internally it will call base class constructor first, where x will get initialized & further
    again in reverse order destructors will be called. that is derived class destructor first & Base class
    destructor next. */

    d1.get_data();

}