
/* Dynamic Constructor */
/* This Constructor is used to allocate memory to objects at run time.
The memory allocation to objects is done with the help of new operator.*/

/* Constructor & Destructors won't be invoked in case of pointers creation. 
They are only invoked for objects Creation. */



#include <iostream>
#include <cstring>        
using namespace std;

class Deep{
    char *name;
    public:
        Deep(){                               // Default constructor
        }                                        //Default constructor won't be called in this program. Just provided for reference.  

        Deep(int a, int b)
        {
            name = "Manas";
        } 

        Deep(const char *s){                 
            name = new char[strlen(s) + 1];     
            strcpy(name,s);                     
        }

        Deep(Deep& temp)                        
        {                                         
            name = new char[strlen(temp.name) +1];      
            strcpy(name,temp.name);                     
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
    /*Deep s1("vector"), s2(s1);           //here we are creating s1 object and passing string "vector" hence parameterized constructor will be called at line:14 .
    cout << "Before Modyfying" << endl;
    s1.print_data();
    s2.print_data();
    s1.Modify_data();
    cout << "After Modyfying" << endl;
    s1.print_data();
    s2.print_data();
    */

   Deep *ptr1, *ptr2;           //Pointer of class type Deep. Here Constructor won't be called as it is of pointer type.
   ptr1=new Deep;               //Allocated Dynamic memory for the object of class type Deep. Here Constructor will be called as Object is getting created and stored at Dynamic Memory.
   ptr1->print_data();   
   ptr2=new Deep(146, 187);     //Here Constructor will be called as Object is getting created and stored at Dynamic Memory.
   ptr2->print_data();
} 


