#include <iostream>
int main()
{
    float f;
    std::cout<<"Enter value of f"<<std::endl;
    std::cin>>f;
    std::cout<< "%g format" << f<< std::endl;                           //result is displayed till first 0 after decimal
    std::cout<< "%f format" << std::fixed <<f<< std::endl;              //Complete result is displayed 
    std::cout<< "%e format" << std::scientific <<f<< std::endl;         //Result is displayed in exponential format
    return 0;
}