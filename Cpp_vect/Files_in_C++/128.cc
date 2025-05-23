// Opening file using fopen function 
// Opening one file in read mode and the other file in write mode. Then copying data from one file to other.
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv){

    if(argc!=3){
        cout << "Usage: a.exe filename1 filename2" << endl;
        return 0;
    }

    string s;

    ifstream fin;
    ofstream fout;

    fin.open(argv[1]);
    if(fin.fail()){
        cout << "file not present" << endl;
        return 0; 
    }

    fout.open(argv[2]);
    while(getline(fin, s))
    fout << s << endl;   
    //fout.put(ch); You can use this put function, for writing single character-by-character. 

    fin.close();
    fout.close();
}