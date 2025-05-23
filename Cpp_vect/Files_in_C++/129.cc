
//Using Fstream class for both fin fout.

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv){

    if(argc!=3){
        cout << "Usage: a.exe filename1 filename2" << endl;
        return 0;
    }

    string s;

    fstream fin, fout;

    fin.open(argv[1], ios::in);  //Second argument decides in which mode you want to open the file.
    if(fin.fail()){
        cout << "file not present" << endl;
        return 0; 
    }

    fout.open(argv[2], ios::out);
    while(getline(fin, s))
    fout << s << endl;   
    //fout.put(ch); You can use this put function, for writing single character-by-character. 

    fin.close();
    fout.close();
}