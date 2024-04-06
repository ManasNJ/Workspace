#include <iostream>
using namespace std;
int main()
{
    string s("MJ's World"), s1=s, s2=s1;   /* In string datatype you can assign one string to another
    because in Cpp string datatype is actually a string class. & when u write "string s" , s is an object of string class.
    In that string class one pointer of character type will be created which will store/point the character 
    array which we pass as  input string. */
    /* hence in string datatype you can assign one string variable to another string variable as internally
    it just means assigning ptr to ptr */

    cout << "Entered String is - "<<s2<<endl;
}