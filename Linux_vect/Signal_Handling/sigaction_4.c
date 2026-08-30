#include "header.h"

void my_isr(int n){
    printf("In ISR...\n");
    sleep(30);
    printf("After sleep\n");
}
int main(){
    struct sigaction new;
    printf("Hello pid=%d\n",getpid());
    new.sa_handler=my_isr; // Here you can also use SIG_DFL, SIG_IGN or your own ISR, just like my_ISR.
    sigemptyset(&new.sa_mask); // This is used to initialize the signal set to empty, so that no signals are blocked during the execution of isr.
    sigaddset(&new.sa_mask, 3); // block 3 rd signal, and allow all other signals to be handled. If you want to block all signals, then you can use sigfillset(&new.sa_mask); and if you want to block all signals except 3rd signal, then you can use sigdelset(&new.sa_mask, 3);
    //sigfillset(&new.sa_mask); // block all signals.
    // sigdelset(&new.sa_mask, 3); // block all signals except 3rd signal.
    new.sa_flags=SA_NODEFER;
    SIGACTION(2,&new,0); //Third argument we are passing 0, because we don't want to save the old action.
    while(1);
}
