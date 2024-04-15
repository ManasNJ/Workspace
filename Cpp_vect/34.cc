
#include <iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[5];

    //p=new int[5]{10, 20, 30, 40, 50}; //you can also take array input directly.

    cout << "Enter The 5 array values" <<endl;
    for(int i=0; i<5; i++)
    cin >> p[i] ;

    for(int i=0; i<5; i++)
    cout << p[i] << endl;

    delete [] p;     // This is how you deallocate dynamically allocated array.
}

/* NEW Operator */
/*
   1) Upon Failure new operator returns exception called "bad_alloc",  whereas malloc returns zero on failure.
   2) Using new operator you can directly initialize data.
   3) NEW operator calls constructor upon creation.
*/