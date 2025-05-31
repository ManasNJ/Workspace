// Example of Class to class conversion
/* That means both Target and source are classes */

#include <iostream>
using namespace std;

class B{

    int m,n;

    public: 
    B(){

    }

    B(int p, int q){
        m=p, n=q;
    }

    int get_m(){
        return m;
    }

    int get_n(){
        return n;
    }
};

class A{

    int x,y;

    public:
    A(){
        x=0, y=0;
    }

    A(B t){                 //Conversion Constructor
        x = t.get_m();
        y = t.get_n();
    }

    void get_valueOfA(){
        cout << "x - "<<x<< " " << "y - " << y<< endl;
    }

};

int main(){

    A a1;
    B b1(100, 200);
    a1.get_valueOfA(); 
    a1 = b1; // ideally this line will give error. Becauase a1 & b1 are of two different classes.
    // To resolve this issue we will use type conversion.

    a1.get_valueOfA();
}