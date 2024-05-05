
/* Function Call Operator Overloading '[]' */

#include <iostream>
using namespace std;

class Array{
    int a[5];

    public:
        Array();
        Array(int, int, int, int, int);
        void print_data();
        Array operator=(Array temp);
        int operator[](int);

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

int Array::operator[](int Index){           //here, through this ptr 

    cout << "Operator Overloading '[]'" << endl;
    return a[Index];

}

int main()
{
    Array a1(10, 20, 30, 40, 50), a2(50, 60, 70, 80, 90);


    for(int i=0; i<5; i++)
    cout << a1[i] << endl;          // internally compiler function call --> " a1.operator[] (i); "

    for(int i=0; i<5; i++)
    cout << a2[i] << endl;
}