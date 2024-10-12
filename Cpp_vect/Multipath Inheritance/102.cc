
/* Multipath Inheritance with values passed */

#include <iostream>
using namespace std;

class A {
    
    public:
    int a;

    A(){
        cout << "Constructor A" << endl;
    }

    
    A(int a1): a(a1) {
        cout << "a - " << a << endl;
    }

    ~A(){
        cout << "Destructor A" << endl;
    }
};

class B: public A { // B is implemented from A
    
    public:
    int b;

    B(){
        cout << "Constructor B" << endl;
    }

    
    B(int b1 , int d): A(d), b(b1) {
        cout << "b - " << b << endl;
    }

    ~B(){
        cout << "Destructor B" << endl;
    }
};

class C: public A { // C is implemented from A
    
    public:
    int c;

    C(){
        cout << "Constructor C" << endl;
    }

    C(int c1 , int d): A(d), c(c1) {
        cout << "c - " << c << endl;
    }

    ~C(){
        cout << "Destructor C" << endl;
    }
};

class D: public B, public C { // D is implemented from B & C
    
    public:
    int d;

    D(){
        cout << "Constructor D" << endl;
    }

    D(int a, int b, int c, int d, int e):  B(a, b), C(c,d), d(e){

        cout << "d - "<< d << endl;

    }

    ~D(){
        cout << "Destructor D" << endl;
    }

    void get_data()
    {
        cout << "a -" << B::a << endl;  //a is coming from 2 paths, 1 a is from B, another from C.
        cout << "b -" << b << endl;
        cout << "a -" << C::a << endl; //(Above mentioned reason) Hence you need to specify a is from B or C.
        cout << "c -" << c << endl;
        cout << "d -" << d << endl;
    }
};

int main()
{
    D d1(100, 200, 300, 400, 500);
    //d1.get_data();
}