#include "header.h"
int main(){
    int r=0;
    printf("Hello, pid=%d\n", getpid());
    r = fork();
    if(0==r){
        printf("It is child process code... \n");
    }
    else{
        printf("It is parent process code...\n");
    }
    printf("Hi, pid=%d\n", getpid());

    while(1);
}

/* In above code, after the fork , remaining lines will be executed by both parent and child.
But in parent process, return value of fork will be child PID. 
In child process, fork return value is 0. */