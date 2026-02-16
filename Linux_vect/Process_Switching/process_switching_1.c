#include "header.h"
void main(){
    int num;
    printf("Hello pid=%d\n", getpid());
    sleep(10);
    printf("After sleep...\n");
    while(1);
}

// Switching of states happens as follows:
// ready -> run -> delay -> ready -> run -> ready -> run
