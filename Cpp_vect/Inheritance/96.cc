
#include <iostream>
using namespace std;

class Base{
    
    public:

    int x;

    void set_base(){
        cout << "enter x" << endl;
        cin >> x;
    }

    
    void get_base(){
        cout << "x - " << x << endl;
    }
};

class Derived : private Base{

    int m;

    public:

    void set_derived(){
        cout << "Enter x & m" << endl;
        cin >> x;    // x can't be accessed by derived class. 
        //As we know derived class can access the public data of base class directly, irrespective of mode of inheritance.
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

    b1.x = 10; 
    b1.set_base(); 
    b1.get_base();
    //b1.m = 20;  Invalid statement !! Because m is in derived class and can't be accessed by base class

 /* Due to private mode of inheritance, any object of derived class can't access data of base class.
 But, inside the derived class, the derived class can directly access public members of baseclass.
 Hence, d1.x / d1.set_base() / d1.get_base() is invalid.
 But, if u see inside definition of derived class, it is able to directly call the variables &
 functions of base class. */
 
    //d1.x =30;     Invalid !! Because mode of inheritance is private. 
    /* Same for
    d1.set_base();
    d1.get_base();
    */

    d1.set_derived();   //Valid
    d1.get_derived();   //Valid

}