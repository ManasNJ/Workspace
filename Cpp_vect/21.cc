
/* Alias Name for namespace */

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
    namespace final = first::second::third;           // Alias name to Namespace 
    cout<<first::x<< " "<<first::second::y<< endl;
    final::print_line();                                // Alias name to Namespace 
}
