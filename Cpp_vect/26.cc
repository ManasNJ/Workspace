/* Cpp session 16 - important - revise last 15 mins lecture*/

#include <iostream>
using namespace std;
int main()
{
    char s[20], p[20];
    cout<<"Enter string"<<endl;
    cin >> s;            //String input without space       
    /* Extraction operator can't read space in array of characters */
    /*If you Enter string "MJ World" , it will print only 'MJ', because it will consider space as end of string
    To avoid this issue you can use getline function.*/
    cout << s << endl;
    cout<<"Enter string for printing using getline function - " << endl;
    cin.getline(p, 20);    //String input with space 
    cout<<"string p - " <<p<< endl;

}