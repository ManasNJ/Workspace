
#include "header.h"
int main(){

    // Below two commands will execute sequentially
    // system("ls");
    // system("pwd");

    //We will use below method to execute both commands concurrently.
    if(0 == fork()){
        system("ls");   // Executes in Child process.
    }
    else{
        system("pwd");  // Executes in Parent process.
    }
}