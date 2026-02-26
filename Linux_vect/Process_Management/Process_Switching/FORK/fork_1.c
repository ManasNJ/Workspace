
/*In below program , duplication of parent process happends at line 7, 
So after point 7 there will be 2 processes executing concurrently. Parent and Child process. 
Child process will execute from line 10 onwards only, parallel to parent process.

After that both parent and child will be stuck in while loop. */

#include "header.h"
int main(){
    printf("Hello\n");
    fork();
    printf("Hi\n");

    while(1);
}