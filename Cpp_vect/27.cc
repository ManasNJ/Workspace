#include <iostream>
using namespace std;
int main()
{
    string s, p;
    cout<<"Enter the String"<<endl;    
    cin>>s;             //Taking data input without space
    cout << "Entered String is "<<s<<endl;
    getline(cin, p);    // Takes data input with space
    cout << "Entered String is "<<p<<endl;
}

/*

char s[20];
cin.getline(char* ,size);
cin.getline(s,20);

string s;
getline(istream.obj,string variable);
getline(cin,s);

*/