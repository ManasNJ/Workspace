
/* Empty structture size is 1 byte in C++. But why ? */
/*  Now in below program your structure is not having any variable. Hence ideally if there is no variable present in a structure,
then after creating a structure instance/variable still no memory will be allocated for that structure because there are no data members
in the structure. But here in C++ we have a function defined in structure so how can we access that if no memory is allocated
for structure variable !!??. Hence to solve this issue in  C++, atleast 1 byte of memory will be allocated for any structure in C++.
But unlike C++ , in C function can't be defined inside a structure, Hence no need to assigne 1 byte memory compulsorily for an empty structure
in C.
*/

#include <iostream>
using namespace std;
struct st{
    void function()
    {
        cout<<"This is a function in empty structure"<<endl;
    }
};

int main()
{
    struct st s1;
    s1.function();
}
 
