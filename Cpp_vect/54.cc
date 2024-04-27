
/* Parameterized & Default Constructor */
/*Also this is an example of Function Overloading as Constructor function name is same but arguments passed & no of args are different. */

/*If user provides a constructor explicitly then Compiler won't provide default constructor. */

#include <iostream>
using namespace std;

class Family{
    
    int cash, gold;

    public:
    
    Family();

    Family(int, int);  

    void print_data(){
        cout << "Values of Cash and Gold" << endl;
        cout << "cash : "<< cash << " gold : "<<gold <<endl;
        }
};

Family::Family(){
        cout<<"Default Constructor"<<endl;
        cout << "Enter values of Cash and Gold" << endl;
        cin >> cash >> gold;
    }

    Family::Family(int a, int b){
        cout<<"Parameterized Constructor"<<endl;
        cash=a, gold=b;
    }

int main(){
    Family f1, f2(100, 200);
    f1.print_data();
    f2.print_data();
}

/*In output you will see Default Constructor & Parameterized Constructor getting printed first as
Constructor functions are called before the Object creation
Hence Parameterized Constructor is getting printed and then print data function for individual class is called
Which will print respective data as feeded by the constructors. */