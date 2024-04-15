
/* Directive method ex: Using Namespace Std */

#include<iostream>
using namespace std;
namespace elon
{
    int quote=1;
    void ElonOnceQuoted(void)
    {
        std::cout<<"Constantly think about how you can do things better"<<std::endl;
    }
}

namespace steve
{
    int quote_=2;
    void SteveOnceQuoted(void)
    {
        std::cout<<"The tech endeavours that you see around yourself are made by people no better than you"<<std::endl;
    }
} 

int main()
{
    using namespace elon;
    cout<<quote<< endl;
    ElonOnceQuoted();

    using namespace steve;
    cout<< quote_<< endl;
    SteveOnceQuoted();
}
 
 /* In Namespace there is no concept of high priority for locals than globals. Namespace is just a block of code.
 Be it return outside main function or inside. Wherever it is written , further from there it data can be used in code.
Therefore You can't keep same variable in two namespaces & decalre both of them in a file scope. It will lead to 
Ambiguity error.
 */