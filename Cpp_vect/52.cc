
#include <iostream>
using namespace std;

class MJ{

    int AI, ML;
    
    public:                     //Constructors should always be in Public section so that they can  be accessible.
    /*-- Constructor start --*/
    MJ(){
        cout << "Constructor called for MJ on Object creation manas" << endl;
        AI=100, ML=101;
    }
    /*-- Constructor end --*/

    void print_data(){
        cout << "AI = " << AI << " " << "ML = " << ML << endl;
    }
};

int main()
{
    MJ manas;               //whenever this object is created the constructor will be called. If object is not created Constructor won't be called.
    manas.print_data();
} 