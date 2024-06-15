#include <iostream>
using namespace std;
int main()
{
    int a=20;
    int &rv =a;                 //reference variable for a. No new memory will be allocated for rv.
    int &rv1=rv;                //No new memory will be allocated for rv1.
    int &rv2=rv1;               //No new memory will be allocated for rv2.

    cout<< a << " " << rv << " " << rv1 << " "<< rv2 << endl;

}