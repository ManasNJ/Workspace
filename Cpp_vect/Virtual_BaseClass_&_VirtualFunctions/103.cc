
/* Virtual Class and Multipath Inheritance with values passed  */

/* Why do we need virtual class */
/* When we inherit a class from another class , for example here , B & C both are inheriting A.
This will lead to data ambiguity/duplication. To avoid this we will add virtual keyword to the class while inheriting.
This way data will be direct passed from A to D. And a seperate memory/value won't be created in B & C.

Previously after creation of d1 object , we were getting 2 a's, that is : a , b , a , c, d
But now : a , b , c , d

Refer virtual_class_1 image for understanding the memory allocation of variables in this code. When we add virtual keyword to Class  B and C while they are inheriting from A 
A ptr called virtual ptr will be created for both B and C. What will happen in this case is that, When D is inherited from B & C , it won't receive two seperate 'a' variables 
from B & C. Instead it will directly receive only one copy of 'a' from class A.

Hence , size of class A = sizeof variable a = 4 Bytes
        size of class B = b + virtual ptr of b + a (a will be considered for Class B's size, as B is derived from Class A ) = 4 + 8 + 4 = 16
        size of class C = c + virtual ptr of c + a (a will be considered for Class C's size, as C is derived from Class A ) = 4 + 8 + 4 = 16 
        size of Class D = b + virtual ptr of b + c + virtual ptr of c + d = 28

        Therefore total size of class D = a (4bytes) + holes (4bytes, due to structure padding) + Vptr_b (8 bytes) + b (4 bytes) + holes (4 bytes)
                                          + Vptr_c (8 bytes) + c (4 bytes) + d (4 bytes)
                                        = 40 Bytes             
*/
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

class B: virtual public A { // B is implemented from A
    
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

class C: virtual public A { // C is implemented from A
    
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
        cout << "a -" << a << endl;  //Now we have added virtual, so won't get ambiguity error.
        cout << "b -" << b << endl;
        cout << "c -" << c << endl;
        cout << "d -" << d << endl;
    }
};

int main()
{
    D d1(100, 200, 300, 400, 500);
    d1.get_data();

    cout << "size A - " << sizeof(A) << endl;
    cout << "size B - " << sizeof(B) << endl;
    cout << "size C - " << sizeof(C) << endl;
    cout << "size D - " << sizeof(D) << endl;
}