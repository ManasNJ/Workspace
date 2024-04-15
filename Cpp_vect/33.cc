#include<iostream>
using namespace std;
int main()
{
    int *p;
    p = new int(78);            // using new operator you can directly do the initialization (that is declaration & definition together)
    cout<<"*p - "<<*p<<endl;
    delete p;               //delete is also an operator. (Always delete the dynamically allocated memory else Memory leak will happen.)
}

/*
    ALways remember, 

    1)  int *p;
        p = new int(5); This is normal initialisation, 4 bytes will be allocated in heap & value 5 will be stored there.

    2) int *p;
       p = new int[5]; This is array allocation, Array of 5 integer locations will be created. therefore total 20 bytes.    
        
       Therefore, there is difference in ( )  &  [ ].
*/