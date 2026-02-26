

#include "header.h"
int main(){
    
    if(0==fork()){ // child-1 gets created

        printf("In Child-1 , pid=%d, ppid=%d", getpid(), getppid());
    }

    else{//Parent 
    
        if(0==fork()){ // child-2 gets created
            printf("In Child-2 , pid=%d, ppid=%d", getpid(), getppid());
        }

        else{//Parent

            if(0==fork()){ // child-3 gets created
             printf("In Child-3 , pid=%d, ppid=%d", getpid(), getppid());
            }
            else{//Parent

            }

        // Whatever instruction comes here will be executed by Parent, child-3.
        }

    // Whatever instruction comes here will be executed by Parent, child-2, child-3.    
    }

// Whatever instruction comes here will be executed by Parent, child-1, child-2, child-3.       
}