// Creating a generic catch block, to handle any type of exception.

#include <iostream>
using namespace std;


int main(){


    try{
        throw "a";
    }

    catch (...){                            // Default catch block syntax
        cout << "Default catch block " <<endl;
    }

}    