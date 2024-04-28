
/* Benefit/Application of Static Member Function */

#include <iostream>
using namespace std;

class Manas{

    char sport[20];
    
    Manas(){
        cout <<"Private Constructor" << endl;
        cin >> sport;
    }

    public:
        static void Object_Create(){
            Manas m1;        //Note that this m1 object is created only inside this Object_Create Function. 
                             //Once the stack frame of Object_Create function ends then the memory allocated for m1 object will also be destroyed.

            cout << "sport - " << m1.sport << endl;
            //cout << "sport - " << sport << endl; As discussed earlier this line will be an error as static member is not havig this ptr & no object address to access sport variable through this ptr. 
        }
};

int main()
{
    /* Now to access Object_Create function you will have to create an object of Class type Manas
    ex: 
    Manas m2; m2.Object_Create();
    But you can't do this as Constructor for class Manas is in private section hence not accessible while creating an object.
    
    So in this case you can take help of Static Member Function :) , as for static Member Function you need not create an object
    You can directly access Static Member Function through Class ;) */

    Manas::Object_Create();
}

/* Important points about Static Member Functions 

Static Member Functions:
1) Static Member Functions can access only Static Members & cannot access non-static members. 

Non-Static Member Functions:
2) Non-Static Member Functions can access static members aswell as non-static members also. 

*/
