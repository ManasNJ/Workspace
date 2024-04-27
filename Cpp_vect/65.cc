

/* Deep Copy Benefit over Deep Copy */
/* Here we will provide user defined definition for Copy Constructor. */

#include <iostream>
#include <cstring>          //Cstring is used for string related C functions in C++. (Similar to String.h in C)
using namespace std;

class Deep{
    char *name;
    public:
        Deep(){                               // Default constructor
        }                                        //Default constructor won't be called in this program. Just provided for reference.   

        Deep(const char *s){                 // Parameterized Constructor (it will receive string "vector" with the character ptr)
            name = new char[strlen(s) + 1];     //Allocating dynamic memory for length of string received + 1 (+1 for '\0')
            strcpy(name,s);                     //Storing/Copying the string received in Dynamic Memory.
        }

        Deep(Deep& temp)                        //Copy Constructor Definition (Deep Copy)
        {                                       //Here "temp" is formal argument name for s1  
            name = new char[strlen(temp.name) +1];      // temp.name is actually s1's name. Observe that here we are creating seperate dynamic memory for S2 in the Deep Copy Constructor.
            //But in previous program  i.e 64.cc default copy constructor was getting called hence shallow copy was happening so seperate Dynamic memory was not getting allocated as the one we have allocated here in line 23.
            strcpy(name,temp.name);                     //Here we are copying temp.name that is s1's name into s2's name that is "name".
        }

        void Modify_data()
        {
            name[0] = 's'; 
        }

        void print_data()
        {
            cout << "String is - " << name << endl;
        }
};

int main()
{
    Deep s1("vector"), s2(s1);           //here we are creating s1 object and passing string "vector" hence parameterized constructor will be called at line:14 .
    cout << "Before Modyfying" << endl;
    s1.print_data();
    s2.print_data();
    s1.Modify_data();
    cout << "After Modyfying" << endl;
    s1.print_data();
    s2.print_data();
} 


/* **Benefit of Deep Copy over Shallow** 
Now in above code, when s1 is created parameterized constructor is called , Dynamic memory is allocated & pointer 'name' will point to that Dynamic Memory where further the string passed by object is stored.
Now when you create s2 & pass s1, so for 's2' specific Copy Constructor which is explicitly defined by user for "Deep Copy" is called. S2 will be sending S1 
& S1 is taken as reference in the deep copy Constructor. for s2 in the deep copy constructor a new Dynamic Memory allocation will be done
in the Copy Costructor which will be having different address from s1. So changing the value at s1's name won't affect s2.
check the readme document for diagram of this explaination*/