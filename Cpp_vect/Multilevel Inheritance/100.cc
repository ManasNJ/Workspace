
/* Multilevel Inheritance */

#include <iostream>
using namespace std;

class Base{
    int x;

    public:
    Base(){
        cout << "Base Default Constructor" << endl;
    }

    Base(int a):x(a){
        cout << "Base Parameterized Constructor" << endl;
    }

    ~Base(){
        cout << "Base Destructor" << endl;
    }

    void get_data(){
        cout << " x - " << x << endl;
    }

};

class Derived1 : public Base
{
    int y;

    public:
    Derived1(){
        cout << "Dervied 1 Default Constructor" << endl;
    }

    Derived1(int a, int b): Base(a),y(b){
        cout << "Derived 1 Parameterized Constructor" << endl;
    }

    ~Derived1(){
        cout << "Derived1 Destructor" << endl;
    }

    void get_data(){
        Base::get_data();
        cout << " y - "<<y<<endl;
    }
};

class Derived2 : public Derived1
{
    int z;

    public:
    Derived2(){
        cout << "Dervied 2 Default Constructor" << endl;
    }

    Derived2(int a, int b, int c): Derived1(a,b),z(c){
        cout << "Derived 2 Parameterized Constructor" << endl;
    }

    ~Derived2(){
        cout << "Derived2 Destructor" << endl;
    }

    void get_data(){
        Derived1::get_data();
        cout << "z - "<<z<<endl;
    }
};

int main()
{
    Derived2 d2(100, 200, 300);
    d2.get_data();
    cout << sizeof(Base) << endl;
    cout << sizeof(Derived1) << endl;
    cout << sizeof(Derived2) << endl;
} 