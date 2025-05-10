#include <iostream>
using namespace std;

int division(int a, int b){
    return a/b;
}

int main(){

    int x, y, ret;

    cout << "Enter value of x " << endl;
    cin >> x;
    
    cout << "Enter value of y " << endl;
    cin >> y;

    try{
        if(y){
        ret = division(x,y);
        cout << "Result of Division is : " << endl;
        cout << ret << endl;
        }

        else 
        throw "Floating Point Exception";
    }

    catch(const char *p)
    {
        cout << "Exception Handled : " << endl;
        cout << p << endl;
        
    }

    cout << "\nException Handling Enjoy Madi ! :) " << endl; 
}