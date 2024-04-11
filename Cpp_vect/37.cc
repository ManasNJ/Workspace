
/* Default Arguments 
In case of Default arguments you will provide the default value to arguments in the fucntion definition, 
in case if any valid value is not sent during function call. Else the user suppied value will be considered.
*/

/* If you are using the primitive method of writing the function, that is
1) Function Prototype
2) Function Call
3) Function Definition 

Then Default arguments should be mentioned only in protoype , not in definition.*/

#include<iostream>
using namespace std;
int sum(int a=5, int b=15, int c=40)
{   
    cout << "Value of Sum is" << endl;
    return a + b + c;
}
int main()
{
    cout << sum(10, 20, 30) << endl;
    cout <<"With default parameter "<< sum(10, 20)<< endl;
    cout <<"With all default parameter "<< sum()<< endl;
}