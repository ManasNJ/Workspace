
/* Using Declarative Method */

#include<iostream>
using namespace std;
namespace mj{
    int my_number=20U;
    void Func1(void)
    {
        printf("Welcome to mj's world!\n");
    }
}
namespace manas{

    int my_number=30U;
       void Func1(void)
    {
        printf("Welcome to manas's world!\n");
    }
}
int main()
{
    using mj::my_number;
    using manas::Func1;
    cout<<my_number<<endl;
    Func1();
}


