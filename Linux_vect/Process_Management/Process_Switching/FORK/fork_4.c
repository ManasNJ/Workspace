
// Y -> Y+1 -> Y+2 -> Y+3

#include "header.h"
int main(){
// process Y
    
    if(0==fork()){ // child-1 gets created
    // process Y+1    
    
        if(0==fork()){ // child-2 gets created
        // process Y+2

            if(0==fork()){ // child-3 gets created
            // process Y+3 
            
            }

            else{
            // process Y+2
            }

        }
        else{
        // process Y+1     

        }

    }
    else{
    // process Y
    }

// Whatever instruction comes here will be executed by Parent, child-1, child-2, child-3.       
}