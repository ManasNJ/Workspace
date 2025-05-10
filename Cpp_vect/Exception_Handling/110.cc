#include <iostream>
using namespace std;
int main()
{
    int x, y, ret=0;

    cout << "Enter value of x " << endl;
    cin >> x;
    cout << "Enter value of y " << endl;
    cin >> y;

    try{
        if(0==y)
        throw "Floating Point Exception";

        else 
        {
            ret=x/y;
            cout << ret << endl;
        }    
    }

    catch(const char *p){
        cout << "Exception Handled : " <<endl;
        cout<< p << endl;
    }              

    cout << "Have a happy Sunday Evening " << endl;

}       