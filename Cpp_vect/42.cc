#include <iostream>
using namespace std;

class Complex{
    int real, img;

    public:
    void data_input(int r, int i)
    {
        real = r;
        img = i;
    }

    void data_output()
    {
        cout << "The Complex number is : " << endl;

        if(img<0)
        cout << real<<img<<"j"<<endl;

        cout << real << "+" << img << "j" << endl;
    }

    Complex addition(Complex temp)
    {   
        cout<<"\nReturn type : Object "<< endl;
        Complex ret;
        ret.real = real + temp.real;
        ret.img  = img + temp.img;

        return ret;
    }

    Complex* addition1(Complex temp)            //this function has ptr return type.
    {
        cout << "\nReturn type : Address of an object (Pointer return type)" << endl;

        static Complex ret;                 //We need to make it static because ideally life of ret variable will only be for scope og this function
                                            //So after returning the address at end of this function memory will already be destroyed which will lead to dangling pointer.      
        ret.real = real + temp.real;
        ret.img  = img  + temp.img;

        return &ret;
    }

    Complex& addition2(Complex temp)            //this function has ptr return type.
    {
        cout << "\nReturn type : Reference of an object (Pointer return type)" << endl;

        static Complex ret;                 //We need to make it static because ideally life of ret variable will only be for scope of this function
                                            //So after returning the reference at end of this function memory will already be destroyed which will lead to dangling reference.      
        ret.real = real + temp.real;
        ret.img  = img  + temp.img;

        return ret;
    }
};

int main() 
{
    Complex c1, c2, c3, *c4, c5;

    c1.data_input(10,20);
    c1.data_output();

    c2.data_input(100,200);
    c2.data_output();

    c3=c1.addition(c2);
    c3.data_output();

    c4=c2.addition1(c1);
    c4->data_output();

    c5=c3.addition2(c2);
    c5.data_output();

} 