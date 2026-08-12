#include "header.h"
void my_isr(int n){
    printf("In ISR...\n");
}

void main(){
    struct sigaction new;
    printf("Hello pid=%d\n",getpid());
    //signal(2,my_isr);

    new.sa_handler=my_isr; // Here you can also use SIG_DFL, SIG_IGN or your own ISR, just like my_ISR.
    sigemptyset(&new.sa_mask);
    new.sa_flags=0;
    sigaction(2,&new,0); //Third argument we are passing 0, because we don't want to save the old action.

    /*Sigaction can be called in three different ways :
a) sigaction(signum, &v, 0); // setting new action but not collecting the old one

b) sigaction(signum, 0 , &v1); // collecting old action but not setting new

c) sigaction(signum, &v , &v1); // setting new action and collecting old action. */

    while(1);
}

/* In line 13 there are certain flags that we can make use of : 

1) SA_NOCLDSTOP : This flag is used with SIGCHLD signal. As we know that , based on operation of child process, parent process is notified by a SIGCHILD Signal. 
This particular flag prevents the signal from being generated and notified to parent, when a child process stops or resumes. It is only generated when the child process terminates.

2) SA_NOCLDWAIT : This flag is also used with SIGCHLD signal. It prevents the creation of zombie processes.

3) SA_NODEFER : This flag is used to prevent the signal from being blocked during the execution of the signal handler. */