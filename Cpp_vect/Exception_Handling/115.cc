// With Default Catch Block


#include <iostream>
using namespace std;


int main(){


    try{
        throw "a";
    }

    catch (int a){
        cout << "Int catch " << a <<endl;
    }

    
    catch (char ch){
        cout << "char catch " << ch <<endl;
    }

     catch (float f){
        cout << "float  catch " << f <<endl;
    }

/*
    catch (const char *s){
        cout << "string catch " << s <<endl;
    }
*/
    catch(...){
        cout << "Default Catch Block" << endl;
    }
}    