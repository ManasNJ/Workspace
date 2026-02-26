
#include <header.h>
int main(){

    if(0==fork()){
        printf (" In child PID = %d, PPID = %d\n", getpid(), getppid());
        sleep(10);
        printf (" In child PID = %d, PPID = %d\n", getpid(), getppid());
    }

    else{
        while(1);
    }
}

/* here parent is in while(1) loop so ideally it will never complete. */