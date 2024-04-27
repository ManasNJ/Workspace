
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
    Manas MJ;
    Manas AJ;
    Manas NJ;
    cout << "&MJ - " << &MJ << endl;
    cout << "&AJ - " << &AJ << endl;
    cout << "&NJ - " << &NJ << endl;
}

/*Destructors are called exactly in the Opposite order of Constructors */
/*When MJ is created, a stack frame by name of MJ is created & Constructor MJ is called
When AJ is created, a stack frame by name of AJ is created & Constructor AJ is called
When NJ is created, a stack frame by name of NJ is created & Constructor NJ is called
NJ was last Object created so here Onwards Destructor calls will start
First as per the reverse order, Destructor NJ is called 
then Destructor AJ is called & lastly Destructor MJ is called. */