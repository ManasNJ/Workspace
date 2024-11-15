
//Virtual Function Demonstration

#include <iostream>
using namespace std;

class A{
    public:

    void test1(){
        cout << "Test 1 of A" << endl;
    }
    
    virtual void test2(){
        cout << "Test 2 of A" << endl;
    }
    
    virtual void test3(){
        cout << "Test 3 of A" << endl;
    }
};

class B : public A{
    public:

    void test1(){ 
        cout << "Test 1 of B" << endl;
    }
    
    
    void test3(){
        cout << "Test 3 of B" << endl;
    }
};

class C : public A{
    public:

    void test1(){
        cout << "Test 1 of C" << endl;
    }
    
    void test2(){
        cout << "Test 2 of C" << endl;
    }
    
    void test3(){
        cout << "Test 3 of C" << endl;
    }
};

int main(){

    A *bptr;
    A *bptr2;

    B b1;

    C c1;
    bptr2 = &c1;

    bptr = &b1; //This instruction will implement at runtime , where as Function Binding happens at Compile time.
    // For any Function if you have attached Virtual keyword, it will get binded at run time (that means address assigning happens at runtime.) .

    bptr->test1();
    bptr->test2();
    bptr2->test3(); 

}