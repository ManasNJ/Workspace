
/* Destructors are called in the Reverse order of Constructor Calls */
/* In below program observe the address values & its reverse order */


#include <iostream>
using namespace std;

class Manas{
    int *Coding;

    public:
    Manas(){
        cout << "Constructor - "<< this << endl;
        Coding = new int[4];
    }

    ~Manas(){                               //Tilt symbol is to specify that it is a Destructor.
        cout << "Destructor - " << this << endl;
        delete [] Coding;
        cout <<"Dynamic Memory Released" << endl;
    }
};

int main()
{
    Manas *MJ;
    MJ= new Manas;

    /*Notice that if you only write this program till line 28, then destructor won't be invoked.
    It will only invoke if you delete the pointer MJ. */
    
    delete []MJ;
    /*Only if you write this line 33, then destructor will be called.
    Try getting output of this program with & without line 33. */
}
