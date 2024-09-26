
#include <iostream>
using namespace std;

class Base{
    
    int x;

    public:

    void set_base(){
        cout << "enter x" << endl;
        cin >> x;
    }

    
    void get_base(){
        cout << "x - " << x << endl;
    }
};

class Derived : protected Base{

    int m;

    public:

    void set_derived(){
        cout << "Enter x & m" << endl;
        // cin >> x;    x can't be accessed by derived class as it is in private section of base class.
        set_base(); //instead u can call base class local functions to access x
        cin >> m;   
    }

    void get_derived(){
        cout << "Values of x & m are " << endl;
        //cout << " x - " << x << endl;    x can't be accessed by derived class as it is in private section of base class.
        get_base(); 
        cout << " m - " << m << endl;
    }

};

int main()
{
    Base b1;
    Derived d1;

    //b1.x = 10; // inValid statement because x is in private section
    b1.set_base(); //Same as above reason
    b1.get_base();
    //b1.m = 20;  Invalid statement !! Because m is in derived class and can't be accessed by base class

    //d1.x =30;     Invalid !! Because x is in private section of base class.
    /* Same for
    d1.set_base();
    d1.get_base();
    */

    d1.set_derived();   //Valid
    d1.get_derived();   //Valid

}