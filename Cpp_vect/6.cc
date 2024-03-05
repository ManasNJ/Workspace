#include <iostream>
using namespace std;
int main()
{
    int a=20;
    int &rv =a; //reference variable for a
    int &rv1=rv;
    int &rv2=rv1;

    cout<< a << " " << rv << " " << rv1 << " "<< rv2 << endl;

}