
/*
Important point to remember : Scheduler or process manager's process  ID is 0.

Concepts of Orphan and Zombie process are related to child process. Lifetimes of Parent and child process may
or may not be the same. 

Orphan process : If parent process execution completed before the child. Then the child process is called Orphan process.
For any Orphan process , init process is the parent.

Zombie Process : If child execution completes , but parent process is still executing, then the child becomes zombie.
Zombie is a dead process which has no instruction left to execute and is left in defunctional state. */

#include <header.h>
int main(){

    if(0==fork()){
        printf (" In child PID = %d, PPID = %d\n", getpid(), getppid());
        sleep(10);
        printf (" In child PID = %d, PPID = %d\n", getpid(), getppid());
    }

    else{
        sleep(5);
    }
}
/* In above program, child process becomes orphan after a delay of 5 seconds.*/