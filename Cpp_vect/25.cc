
/* Colour Coding - Refer Linux Manual Page of Console Codes for color codes */

#include <iostream>
using namespace std;
#define RED     "\033[31;1m"
#define GREEN   "\033[32;45;1;4m"
#define RESET  "\033[0m"
int main()
{
    cout<<RED<<"Good Morning"<<endl;
    cout<<GREEN<<"Good Afternoon"<<endl;
    cout<<RESET<<"Thanks"<<endl;
}