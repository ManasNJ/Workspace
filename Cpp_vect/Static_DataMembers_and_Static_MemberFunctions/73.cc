
/* Static Data Members */
// Static Data members are like global variables for that particular class and any part of that class can access the static members. 
// Static data members only belongs to the class and not the object.
/* Size of class/structure depends upon only non-static data members of the class.
For static data members memory is allocated in data section, whereas for non-static data members
0f a class memory is allocated in stack section.
Hence for calculating size of class only non-static data members are considered.

Once a static member is declared in class , you also have to define it outside the class.  */

#include <iostream>
using namespace std;
    
class Insta{
    static int count;
    int x;
};

main()
{
    cout << sizeof(Insta) << endl;
}

//Output of above program is 4Bytes because size of class will only be 4 bytes where in size of  int x is considered.
//count variabe is static so it will be stored in data section of RAM.