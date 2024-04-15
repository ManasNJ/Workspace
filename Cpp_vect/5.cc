
//Scope  resolution operator is a predefined operator in C++ that lets you access global variables.

#include <iostream>
int a=600;
int main()
{
    int a=100;
    std::cout<<"Local value of a: "<<a<<std::endl;      //a=100 is printed
    std::cout<<"Global value of a: "<<::a<<std::endl;   //a=600 is printd
}