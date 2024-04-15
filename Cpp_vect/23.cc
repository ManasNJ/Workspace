
/*bool datatype stores only information only in 1 bit format. Either 1 for true or 0 for false. But memory taken by Bool variable is 1 Byte because memory allocation is only done in Byte format. */

#include<iostream>
using namespace std;
int main()
{
    bool byte_1 = 15;
    cout << "Size of Bool - "<<sizeof(byte_1)<< endl;
    cout << byte_1 << endl;                    // bool datatype stores only information only in 1 bit format. Either 1 for true or 0 for false. 
    cout << boolalpha << byte_1 << endl;      // Bool alpha flag is used for printing in true/false format according to bool.
} 

