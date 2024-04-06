
/*Wchar is a C++ datatype. Its a widebody character*/
/*For Wchar you write wcout/wcin for input & output, that is wide body Cin & Wide body Cout*/
/*Using wchar you can print data in any language. You just need to refer jrgraphix.net for the right code.*/
/* As of now facing issue with printing this in 64 bit system but should work fine in 32 Bit*/
/*Below program will print 'good' in hindi , try printing it in cocalc editor */

#include<iostream>
using namespace std;
int main()
{
    wchar_t var1[10] = {0x0917, 0x0941, 0x0921};
    setlocale(LC_ALL, "");
    wcout << var1 << endl ;                             //will print 'good' in hindi
}


/*
#include<iostream>
using namespace std;
int main()
{
    wchar_t var1 = 0x0917;
    setlocale(LC_ALL, "");
    wcout << var1 << endl ;             //This will print 'G' in hindi 
} 
*/