
#include <iostream>
using namespace std;

class Manas{
    int *Coding;

    public:
    Manas(){
        cout << "Constructor"<< endl;
        Coding = new int[4];
    }

    ~Manas(){                               //Tilt symbol is to specify that it is a Destructor.
        cout << "Destructor" << endl;
        delete [] Coding;
        cout <<"Dynamic Memory Released" << endl;
    }
};

int main()
{
    Manas MJ;
}