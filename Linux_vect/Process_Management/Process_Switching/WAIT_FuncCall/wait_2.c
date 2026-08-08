
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

        if(WIFEXITED(s)) // this macro gives us true if the process terminated normally .
        printf("Child terminated noramlly %d\n", WEXITSTATUS(s)); // this macro gives us the exit status is sent

        else if(WIFSIGNALED(s) )  // this macro returns true if the process was terminated by a signal.
        printf("Child terminated due to a signal %d\n", WTERMSIG(s)); // this macro gives us the signal number.
 
        /* All above macros which provide signal values and exit status basically mask the undesired bytes 
        out of the 4 bytes involved in integer s, to give us the desired byte value. */

    }
}

/* For more info on significance of 's',  check the notes in linux readme file. */
