
// Object Slicing

#include <iostream>
using namespace std;

class Base{

    protected:
    int x , y;

    public:
    Base(){
        x=0, y=0;
    }

    Base(int a, int b){
        x=a , y=b;
    } 

    void get_data(){
        cout << "x - " << x << endl;
        cout << "y - " << y << endl;
    }
};

class Derived : public Base{

    int z , w;

    public:
    Derived(){
        z= 300, w=400;
    }
    Derived(int a, int b, int c, int d):Base(a,b){
        z = c;
        w = d;
    }
    void get_data(){
        cout << "x - " << x << endl;
        cout << "y - " << y << endl;
        cout << "z - " << z << endl;
        cout << "w - " << w << endl;
    }
};

int main(){

    Base b1; 
    b1.get_data();
    Derived d1(100, 200, 300, 400);
    b1=d1; //Object slicing will happen , cause you are assigning Derived class object to Base class. 
    //So the other 2 members of Derived class object that is z & w will get sliced off.
    b1.get_data();
    d1.get_data();
}