
//Overloading '-' Operator

#include <iostream>
using namespace std;

class Array{

    int a[5];

    public:
    Array(){
        cout << "Consructor" << endl;
        for(int i=0; i<5; i++)
        a[i] = 0;
    }

    Array(int x, int y, int z, int l, int m){
        a[0] = x;
        a[1] = y;
        a[2] = z;
        a[3] = l;
        a[4] = m;
    }


    int operator[] (int p){
        cout << "Operator = '[]' Overloaded" << endl;
        return a[p];
    }

    void print_data(){
        for(int i=0; i<5; i++)
        cout << a[i] << endl;
    }

    Array operator-(){
        Array ret;
        for(int i=0; i<5; i++)  
        ret.a[i] = -a[i];

        return ret;
    }
};



int main()
{
    Array a1(10, 20, 30, 40, 50), a2(60, 70, 80, 90, 100), a3;

    cout << "Printing thorugh Print Data Function" << endl;
    a1.print_data();
    cout << "\n" <<endl;
    a2.print_data();

    for(int j=0; j<5; j++)
    cout << a1[j] << endl;              //--> a1.operator[](int j)

    
    for(int j=0; j<5; j++)
    cout << a2[j] << endl;

    for(int j=0; j<5; j++)
    cout << a3[j] << endl;

    
   a2 = -a1;       /*            '-' is a unary operator. 
                    internally --> a2 = a1.operator- ();
                    in the call nothing is being sent beacuse we are using '.' operator so it will access address of a1 through this ptr.
                    So no need to send some address explicitly. 
                    */

    for(int j=0; j<5; j++)
    cout << a2[j] << endl;

}