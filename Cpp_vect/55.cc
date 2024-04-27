
/* Parameterized & Default Constructor */
/* You can also take a parameterized constructor with member values defined in constructor functions declaration
If at the object creation no values are passed then, the values given in declaration will be cosnidered. */

#include <iostream>
using namespace std;

class Family{
    
    int cash, gold;
    public:
    
    Family(int cash=10, int gold=20);           //For object f1 no paramters passed so these default parameters are considered. 

    void print_data();
};

    Family::Family(int a, int b){
        cout<<"Parameterized Constructor"<<endl;
        cash=a, gold=b;
    }

    void Family::print_data(){
        cout << "Values of Cash and Gold" << endl;
        cout << "cash : "<< cash << " gold : "<<gold <<endl;
        }

int main(){
    Family f1, f2(100, 200);
    f1.print_data();
    f2.print_data();
}
