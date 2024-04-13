#include<iostream>
using namespace std;

class Complex{
    int real, img;

    public:
    void data_input(int r, int i)
    {
        real = r;
        img =i;
    }

    void data_output()
    {
        cout << "complex number is : " << endl;
        
        if(img<0)
        cout<<real<<img<<"j"<<endl;
        
        else
        cout<<real<<"+"<<img<<"j"<<endl;
    }

    void addition1(Complex obj1, Complex obj2){
            cout<<"\nCall by Object" << endl;
            real =  obj1.real + obj2.real;
            img  =  obj1.img + obj2.img;
    }

    void addition2(Complex &obj1, Complex &obj2)
    {
        cout<<"\nCall by Reference" << endl;
        real = obj1.real + obj2.real;
        img = obj1.img + obj2.img;

    }

    void addition3(Complex *p1, Complex *p2)
    {
        cout<<"\nCall by Address" << endl;
        real = p1->real + p2->real;
        img = p1->img + p2->img;

    }
};

int main()
{
    Complex c1, c2, c3, c4, c5;
    
    c1.data_input(10,20);
    c1.data_output();
    
    c2.data_input(5,0);
    c2.data_output(); 

    c3.addition1(c1, c2);    //----> Internally Complex::addition1(&c3, c1, c2);   
    c3.data_output(); 
    
    c4.addition2(c1, c2); //---->  Internally Complex::addition1(&c4, c1, c2); 
    c4.data_output();  

    c5.addition3(&c1, &c2);  //---->  Internally Complex::addition1(&c5, &c1, &c2); 
    c5.data_output();
}