
/* Virtual Class and Multipath Inheritance with values passed  */

/* Why do we need virtual class */
/* When we inherit a class from another class , for example here , B & C both are inheriting A.
This will lead to data ambiguity/duplication. To avoid this we will add virtual keyword to the class while inheriting.
This way data will be direct passed from A to D. And a seperate memory/value won't be created in B & C.

Previously after creation of d1 object , we were getting 2 a's, that is : a , b , a , c, d
But now : a , b , c , d


Here, virtual keyword is only added for class C and not for B. Hence, class D will take 'a' via class B's inheritance but not from Class C.
As class C is having virtual keyword in inheritance.
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