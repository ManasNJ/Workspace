/* Nested Catch */

#include <iostream>
using namespace std;
typedef const char*  mystring;
int main()
{
    try
    {
        try{

            cout << "This is Nested Try " << endl;
            
            throw "Throw of Nested try";
        }

        catch(mystring s){
            cout << "Inside Nested Catch : "<< s <<endl;
            throw s ; 
        }
    }

    catch(mystring p){

        cout << "Inside outer Catch block : " << p <<endl;
    }
}