#include <iostream>
using namespace std;

class manas{
    public:
    int cricket, coding;
    void print_data()
    {
        cout<< "Cricket: "<< cricket << " " << "Coding: " << coding << endl;
    }

};

int main()
{
    manas m1={100, 200};      // Initializing the class (But for this data members should be available in public section)
    m1.print_data();
}


/* 
So if the data members are available in private section, you can't use the above method to initialize.
For that you need to use the concept called Constructors & Destructors. 
Refer readme for more knowledge on this.
*/