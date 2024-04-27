
/* Member Variable Initialization in Constructors */

#include <iostream>
using namespace std;

class Family{
    
    const int cash, gold;
    public:
    Family();
    Family(int,int);           
    void print_data();
};

    Family::Family():cash(100),gold(200){           //Default Constructor
        cout<<"Default Constructor"<<endl;
    }

    Family::Family(int a, int b):cash(a),gold(b){   //Parameterized Constructor
        cout<<"Parameterized Constructor"<<endl;
        /*cash=a, gold=b; */                        //This will be error as the  data members are constant.
    }
    void Family::print_data(){
        cout << "Values of Cash and Gold" << endl;
        cout << "cash : "<< cash << " gold : "<<gold <<endl;
        }

int main(){   
    Family f1, f2(300, 400);
    f1.print_data();
    f2.print_data();
} 

/* In Constructors if data member variables are constant then they can be only modified with member variable initialization & not the assignment operator.*/