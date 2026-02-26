
/*
In below program, total 4 processes will be created. First of all , bash will run the executable of this file. 
That will be process 1. At line 12, after fork call one child process is created, process 2. 
Now, in process 2 , at line 13 after fork call ,one more child process will be created , process 3. 
And when the original parent process (process 1) reaches line 13, it will create process 4 after the fork call. 
These will be total 4 processes. 
*/

#include "header.h"
int main(){
    printf("Hello, pid=%d\n", getpid());
    fork();
    fork();
    printf("Hi, pid=%d\n", getpid());

    while(1);
}