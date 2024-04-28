
/* "Mutable" Keyword
   It is a keyword used to modify data members in constant member function */

#include <iostream>
using namespace std;

class Manas{
    int Cricket;
    mutable int Coding;     //If mutable , although if its part of Constant Member Function , still it can be modified.

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
       // Cricket =100;    //now this line will be invalid as the function is const. Hence commented.

       Coding = 200;        //Coding is declared as mutable hence although part of Constant Member Function, but it can be modified.

        cout << "Cricket : " << Cricket << " Coding : " << Coding << endl;
    }
};

int main()
{
    Manas M1;
    M1.data_input();
    M1.data_output();
}