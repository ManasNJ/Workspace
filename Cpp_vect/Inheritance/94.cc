
#include <iostream>
using namespace std;

class Base{
    
    public:

    int x;

    void set_base(){
        cout << "Set_base Function call" << endl;
    }

    
    void get_base(){
        cout << "Get_base Function call" << endl;
    }
};

class Derived : protected Base{

    int m;

    public:

    void set_derived(){
        cout << "Enter x & m" << endl;
        cin >> x;
        cin >> m;   
    }

    void get_derived(){
        cout << "Values of x & m are " << endl;
        cout << " x - " << x << endl;
        cout << " m - " << m << endl;
    }

};

int main()
{
    Base b1;
    Derived d1;

    b1.x = 10; //Valid statement because x is in public section
    b1.set_base(); //Same as above reason
    b1.get_base();
    //b1.m = 20;  Invalid statement !! Because m is in derived class and can't be accessed by base class

    //d1.x =30;     Invalid !! Because mode of Inheritance is Protected. So x is converted from Public to protected.
    //Hence main function being a third party, can't access x as it is a protected data now.
    /* Same for
    d1.set_base();
    d1.get_base();
    */

    d1.set_derived();   //Valid
    d1.get_derived();   //Valid

}