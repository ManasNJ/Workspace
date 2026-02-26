
#include "header.h"

void abc(void){
    printf("In abc...\n");
    /* 
    All pending works we need to do in this function.
    Free the allocated memory
    Closing the files which we opened
    Saving the data that we processed till that time.   
    */
}

int main(){
    printf("Hello...\n");
    atexit(abc);  // this will register the abc function for running at exit.
    // all the functions registered under atexit will be called in reverse order of registering.
    printf("Hai...\n");
    sleep(10);
    exit(0);
}


