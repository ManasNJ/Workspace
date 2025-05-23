// Using File pointers  

#include <isotream>
#include <fstream>

using namespace std;

int main(){

    fstream fin("data", ios::in);

    cout << fin.tellg() << endl ;  // this tellg command tells where exactly your fileptr is pinting right now.

    /* For fseek function , we need to pass three arguments 
            
        --> fseek(fileptr, tolerance , ios::beg)
        
           - tolerance means by how many pts you want toshift
           - ios::beg means fileptr will initially point at beginning of file. 
           you can also make it point at current position or end of file , by 
           ios::cur , ios::end. 
           */

           fin.seekg(9, ios::beg);  // Here first argument is by default passed as fin's file ptr. 
           // So no need to pass first argument of fseekg explicitly


}