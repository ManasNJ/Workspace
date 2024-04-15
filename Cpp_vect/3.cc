#include<iostream>
int main()
{
    int x;
    std::cout<<std::uppercase; //Make alphabets capital
    std::cout<<std::showbase; // shows base for values , hex = 0xAA , oct = 012
    std::cout<<std::showpos; // shows + ve sign for positive integers
    std::cout << "Enter values of x " << std::endl;
    std::cin >> x ;
    std::cout << "value of x :" << x << std::endl;
    std::cout << "value of x in hex :" << std::hex << x << std::endl;
    std::cout << "address of x in oct:" << std::oct << x << std::endl;
    int y=300;
    std::cout << "y value:" << y <<std::endl; //last flag used was octal, hence there onwards you will get output in octal format only.

    //To end the flag
    std::cout<<std::nouppercase<<std::noshowbase<<std::noshowpos;
    
}