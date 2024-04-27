
/* Drawback of Shallow Copy */
/* Shallow Copy is also called as member wise copy, that means whatever content is there, it will copy one by one. */

#include <iostream>
#include <cstring>          //Cstring is used for string related C functions in C++. (Similar to String.h in C)
using namespace std;

class Shallow{
    char *name;
    public:
        Shallow(){                               // Default constructor
        }                                        //Default constructor won't be called in this program. Just provided for reference.   

        Shallow(const char *s){                 // Parameterized Constructor (it will receive string "vector" with the character ptr)
            name = new char[strlen(s) + 1];     //Allocating dynamic memory for length of string received + 1 (+1 for '\0')
            strcpy(name,s);                     //Storing/Copying the string received in Dynamic Memory.
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
    Shallow s1("vector"), s2(s1);           //here we are creating s1 object and passing string "vector" hence parameterized constructor will be called at line:14 .
    cout << "Before Modyfying" << endl;
    s1.print_data();
    s2.print_data();
    s1.Modify_data();
    cout << "After Modyfying" << endl;
    s1.print_data();
    s2.print_data();
} 


/* **Drawback of Shallow Copy** 
Now in above code, when s1 is created parameterized constructor is called , Dynamic memory is allocated & pointer 'name' will point to that Dynamic Memory where further the string passed by object is stored.
But now when you create s2 & pass s1, so for 's2' no specific Copy Constructor is explicitly defined by user so "Shallow Copy" called. for s2 aswell name pointer is present which will point at the same dynamically allocated memory of S1.
Therefore now both name ptrs of S1 & S2 are pointing at same Dynamic memory location. If any of the one is updated, then it will reflect/update in the another aswell. 
You can see that when we modify s1 through modify data function, that modification is reflecting in both s1 & s2 later at line 38 , 39.
check the readme document for diagram of this explaination*/