
/* Assignment Operator Overloading '=' */

#include <iostream>
using namespace std;

class Array{
    int a[5];

    public:
        Array();
        Array(int, int, int, int, int);
        void print_data();
        Array operator=(Array temp);

};

Array::Array(){
        cout << "Constructor" << endl;
        for(int i=0; i<5; i++)
        a[i]=0;
}

Array::Array(int x, int y, int z, int p, int q){
    a[0]=x, a[1]=y, a[2]=z, a[3]=p, a[4]=q; 
}

void Array::print_data(){
    for(int i=0; i<5; i++)
    cout<< a[i]<<endl;
}  

Array Array::operator=(Array temp){

    cout << "Operator Overloading '='" << endl;

    for(int i=0; i<5; i++)
    a[i] = temp.a[i];

    return temp;
}

int main()
{
    Array a1(10, 20, 30, 40, 50), a2;
    a1.print_data();

    a2=a1;
    a2.print_data();
}