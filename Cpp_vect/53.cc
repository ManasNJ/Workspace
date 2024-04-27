
/* Program to explain that constructor is called before object creation. */


#include <iostream>
using namespace std;

class Family{
    
    int cash, gold;
    
    public:
   
    Family(){
        cout<<"Constructor"<<endl;
        cout << "Enter values of Cash and Gold" << endl;
        cin >> cash >> gold;
    }
    
    void print_data(){
        cout << "Values of Cash and Gold" << endl;
        cout << "cash : "<< cash << " gold : "<<gold <<endl;
        }
};

int main(){
    Family f1, f2;
    f1.print_data();
    f2.print_data();
}
