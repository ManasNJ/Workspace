#include <iostream>
using namespace std;

/*  Function Overloading : Same 'sum' function definitions with different datatypes of Arg / order / number of args. 
    NAMEMANGLING : Compiler will internally change the function name for its refernce on the basis of number of Args, datatype or order of arguments to 
    differentiate between same function names. This concept is called NAMEMANGLING.
    Function can't be overloaded just on the basis of return datatype. */

// 1
int sum(int a, int b)
{
    cout << "Sum of 2 int "<< endl;
    return a + b;
}

// 2
int sum(float a, float b)
{
    cout << "Sum of 2 float "<< endl;
    return a + b;
}

// 3
int sum(char a, char b)
{
    cout << "Sum of 2 char "<< endl;
    return a + b;
}

int main()
{
    cout << sum(10,20) << endl;
    cout << sum(10.3f, 20.3f) << endl;
    cout << sum('0','1') << endl;

    /*cout << sum(12.4, 62.5) << endl;  By default any decimal value is considered as double. 
    But specifically for double we have not written any function definition, hence this line will give error */ 

}