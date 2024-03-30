
/* Nested Namespace */
/* Namespace inside Namespace */

#include <iostream>
using namespace std;
namespace first
{
    int x=10;
    
    namespace second
    {
        int y=20;

        namespace third
        {
            void print_line(void)
            {
                cout<<"Welcome to MJ's world"<<endl;
            }
        } 
        
    }
}

int main()
{
    cout<<first::x<< " "<<first::second::y<< endl;
    first::second::third::print_line();
}
