
/* (Write a program) WAP to create 3 child process from one parent process and every child should have delay of (1 - 10 secs).
    And every child should return the exit status to parent so that either of the child doesn't goes in to zombie/orphan. */

#include "header.h"
int main(){

    if(0 == fork()){ // Child 1

        int d;
        srand(getpid());
        d = rand()%10 + 1 ;
        printf(" In C1 ...d = %d \n", d);
        sleep(d);
        printf("c1 is done... \n");
        exit(0);
        
    }
    else{ // Parent

        if(0 == fork()){ // Child 2

            int d;
            srand(getpid());
            d = rand()%10 + 1 ;
            printf(" In C2 ...d = %d \n", d);
            sleep(d);
            printf("c2 is done... \n");
            exit(0);

        }

        else{// Parent

            if(0 == fork()){ // Child 3

                int d;
                srand(getpid());
                d = rand()%10 + 1 ;
                printf(" In C3 ...d = %d \n", d);
                sleep(d);
                printf("c3 is done... \n");
                exit(0);


            }

            else{// Parent
                while(wait(0) != -1); // If the parent doesn't want to collect status you can just pass 0 to the wait call.
                printf("Parent is done... \n");
            }
        }
    }
}    