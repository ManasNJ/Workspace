#include<iostream>
int main()
{
    int x; 
    char ch;
    std::cout << "Enter values of x & ch" << std::endl;
    std::cin >> x ;
    std::cin >> ch ;
    std::cout << "value of x :" << x << std::endl;
    std::cout << "value of ch :" << ch << std::endl;
    std::cout << "address of x :" <<(long long int)&x << std::endl;         //Prints address of x
    std::cout << "address of ch :" <<(long long int)&ch << std::endl;       //Prints address of ch
    std::cout << "ascii of ch :" << (long long int)ch << std::endl;         //Prints ascii of ch
}
 