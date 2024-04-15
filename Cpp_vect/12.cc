#include <iostream>
using namespace std;

int* func()
{
    static int k=25;                     //K is static so it will preserve its value all the time
    cout << " value of k " <<k<<endl; 
    return &k;                          //return type of function is pointer, so an address is getting returned.
}

int main()
{
    int a=10;
    int *p=NULL;
    p=func();                           //this is the first time func() is getting called. It will return address of k & store in p.
    *p=a;                               //now p has address of k, & value stored at address of k is 10.
    func();
    return 0;
    
}