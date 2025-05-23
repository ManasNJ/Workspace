
// Program to store/write data in the file 

#include <iostream>
#include <fstream>  //For files related operation in Cpp
using namespace std;

int main(){

    ofstream fout("Destination");  //This will call parameterized constructor and write data destination.
    // A file by the name of Destination will be created in write mode. (Same as write mode in C)
    // If file is already present, then the data present in file will be erased and new data passed will be written.
    
    fout << "Good Morning" << endl;   // Fout command will write data to the Destination file. 
    fout << "Happy Sunday" << endl;

    fout.close();  // Make sure to close the file at end of the program to avoid any unexpected results.
}