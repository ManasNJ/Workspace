

/* Directive method */


#include<iostream>
using namespace std;
namespace mj{
    int my_number=20U;
}
namespace manas{
    int my_number=30U;
}
int main()
{
    {
        //using namespace mj; Declaring both namespace in same block will lead to redefinition/conflicting definition error for my_number.
        using namespace manas;
        cout<<my_number<<endl;
    }

    using namespace mj;    
    cout<<my_number<<endl;  //Here we have blockwise namespace so redefinition error won't come.

}

