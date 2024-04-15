
//Reference to an array
//Size should be provided to reference array. & that size should  match the original array size.

// But array of references is not possible.

#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,20,30,40,50};
    int (&ra)[5]=a;

    for(int i=0; i<5; i++)
    {
        cout<<ra[i]<<endl;
        cout<<"a[" << i << "] = " << ra[i]<<endl;
    }
}w