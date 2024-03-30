


/* Function Definition Outside the Namespace */

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
           void print_line(void);  //Function Prototype inside the namespace
        } 
        
    }
}

void first::second::third::print_line(void)   //Function Definition inside the namespace
        {
            cout<<"Welcome to MJ's world"<<endl;
        }

int main()
{ 
    namespace final = first::second::third;           // Alias name to Namespace 
    cout<<first::x<< " "<<first::second::y<< endl;
    final::print_line();                                // Alias name to Namespace 
}
