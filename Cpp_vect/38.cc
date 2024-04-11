

/* Inline Function */
/* For Inline Functions, iff possible compiler will replace Function calls with Function Definitions. */

/* If Inline function works out a seperate stack frame won't be created for the called function, hence time & space complexity will be reduced. 
Difference between inline function & macro is that, macro will definitely replace whereas inline function will replace only if compiler permits.
So if replaced both inline function & macros are equally fast but if not replaced then macros are faster. */

#include<iostream>
using namespace std;
inline void test()
{
    cout <<"Testing Inline Function" << endl;
}
int main()
{
    test();
} 