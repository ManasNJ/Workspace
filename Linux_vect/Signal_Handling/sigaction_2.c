#include "header.h"
void my_isr(int n){
    printf("In ISR n=%d, pid=%d\n", n, getpid());
}

void main(){
    if(fork()==0){
        printf("Child process pid=%d\n",getpid());
        while(1);
    }
    else{
        struct sigaction new;
        printf("Parent process pid=%d\n",getpid());

        new.sa_handler=my_isr; // Here you can also use SIG_DFL, SIG_IGN or your own ISR, just like my_ISR.
        sigemptyset(&new.sa_mask);
        new.sa_flags=SA_NOCLDSTOP; // This flag is used with SIGCHLD signal. As we know that , based on operation of child process, parent process is notified by a SIGCHILD Signal.
        /*Or you can also do
        SA_NOCLDSTOP | SA_NOCLDWAIT | SA_NODEFER; // yOU CAN use multiple flags together by using bitwise OR operator. */
        */
        sigaction(SIGCHLD,&new,0); //Third argument we are passing 0, because we don't want to save the old action.

        while(1);
    }

    /*Flags & Meaning

SA_NOCLDSTOP: For SIGCHLD — do not deliver SIGCHLD when children stop/continue; only on termination. Use to avoid noisy notifications from stopped children.
SA_NOCLDWAIT: For SIGCHLD — tell kernel not to create zombie processes (children are auto-reaped). Useful when you never wait() for children; avoid if your code relies on waitpid() to collect exit status.
SA_NODEFER: Do not block the delivered signal while its handler runs (allows the same signal to re-enter the handler). Enables reentrant handlers but risks recursion, stack blowup, and race conditions.

Similarly there are many other flags that you can make use of by referring MAN pages. */