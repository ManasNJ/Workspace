
/* Normal Method without using namespace std */

#include<iostream>
namespace elon
{
    int quote=5;
    void ElonOnceQuoted(void)
    {
        std::cout<<"Constantly think about how you can do things better, Keep Questioning yourself!"<<std::endl;
    }
}
namespace steve
{
    int quote=2;
    void SteveOnceQuoted(void)
    {
        std::cout<<"The tech endeavours that you see around yourself are made by people no better than you"<<std::endl;
    }
} 

int main()
{
    std::cout<<elon::ElonOnceQuoted<< std::endl;
    steve::SteveOnceQuoted();
}
 