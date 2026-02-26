
#include "header.h"
int main(){

    if(0 == fork()){
        printf("In child, process ID of child = %d, process ID of parent = %d\n", getpid(), getppid());
        sleep(10);
        printf("In child after sleep\n");
        exit(1);
    }

    else{
        int r, s;
        printf("In parent, process ID of parent = %d\n",getpid());
        r = wait(&s);
        printf("In parent after wait, value of r= %d, value of s= %d\n", r, s);
        while(1);

    }
}

// In above code , until and unless the wait call is made by parent process ar line 15, child process will remain in zombie. 
// &S in wait call will be recevied from exit call made in child.
// You might expect it to store 1, but S will store value 256 ( why , that we will no in next lecture, lecture 17), if 2 was sent in exit, S will store 512.
// r will store child process ID.