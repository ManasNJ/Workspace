// Program to Read data from file

#include <iostream>
#include <fstream>  //For files related operation in Cpp
using namespace std;

int main(int argc, char **argv){

    if(argc!=2){
        cout << "Usage: a.out filename" << endl;
        return 0;
    }
    
    char s[20];
    ifstream fin(argv[1]);

    if (fin.fail()){

        cout << "File not present" << endl;
        return 0;
    }

    //fin >> s;  // To read only the first word from file. This command will read data until space.
    fin.getline(s , 20);  //This line reads whole data of 20 indices, including spaces. 
    //(So using this command you can read whole line of 20 chars)

    // We can also provide the file name directly
    //fin.getline("../../../filename.txt");

    cout << s << endl; // Print the data read and stored in s.


    /*
    1) To print word by word

        string s; 
        while(fin>>s)
        cout << s << endl;  

    2) To print line by line

        string s; 
        while(getline(fin,s))
        cout << s << endl; 
    
    3) To print letter by letter
        
        char ch;
        while( (fin.get()) != -1)
        cout << ch << endl;

        */

    
    
    fin.close();  // Make sure to close the file at end of the program to avoid any unexpected results.
}