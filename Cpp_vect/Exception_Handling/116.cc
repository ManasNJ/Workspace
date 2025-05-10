/* Set_Terminate keyword */

#include <iostream>
using namespace std;

void test(){
    cout << "Unhandled exception raised" << endl;
    cout << "Please check if your code implementation is correct" << endl;

    exit(0); //If exit(0) , program will be terminated normally.
}

int main(){

    /* Set terminate should be written only before throw. Inside or outside try block is fine */
    try{
        set_terminate(test);
        throw 100;
    }

    catch(float f){
        cout << "Float catch" << f << endl;
    }
}