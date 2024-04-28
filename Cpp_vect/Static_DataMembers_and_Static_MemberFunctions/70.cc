

/* Constant Member Function & Constant Keyword */

/*
#include <iostream>
using namespace std;

class Manas{
    int Cricket, Coding;

    public:
    void data_input()
    {
        cout << "Enter the values for Cricket & Coding : " << endl;
        cin >> Cricket >> Coding;
    }

    void data_output()
    {
        Cricket =100, Coding= 200;
        cout << "Cricket : " << Cricket << " Coding : " << Coding << endl;
    }
};

int main()
{
    Manas M1;
}

In above code you are setting the values at line 15 , but they are getting updated at line 20. What if you don't want to let them update once set in data_input(); ?
If you make the variables constant at declaration itself, that is at line 9 then you can't even update them in data_input function.

therefore you need to make the member functions constant so that no other functions can update them.
Refer below code for same.
*/

#include <iostream>
using namespace std;

class Manas{
    int Cricket, Coding;

    public:
    void data_input()                               //Data_input is non-constant member function.
    {
        cout << "Enter the values for Cricket & Coding : " << endl;
        cin >> Cricket >> Coding;
    }

    void data_output() const        /*Ideally when you call a member function, the object address is sent to function & it is caught by "this pointer"
                                        in following way: "Manas* const this" , this mean address received will remain constant but value may change
                                        Now if we attach "const" keyword in front of function name then that means:
                                        "const Manas* const this"  Therefore now address as well as value will remain constant. 
                                        Hence now values won't be updated by this function.*/
    {
       // Cricket =100, Coding= 200;    //now this line will be invalid as the function is const. Hence commented.
        cout << "Cricket : " << Cricket << " Coding : " << Coding << endl;
    }
};

int main()
{
    Manas M1;
    M1.data_input();
    M1.data_output();
}