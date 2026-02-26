
/*This program discusses about perror function (Library function (3) as per man page ) which can be used rather than the primitive method of printing errors through printf.*/

#include "header.h"
void main(){
    
    FILE *fp;

    fp = fopen("data", "r");

    if(0==fp){
        //printf("File Not Present..\n");
        perror("FOPEN"); // THis will give you exact reason of failure.
        return;
    }

    printf("File present...\n");
}

/* The fopen can fail in many possible cases, 
On success it returns structure pointer, and 0 on failure.

Failure cases :
1) File itself is not present
2) File is present but not having read permissions
3) Hardisk is full

perror gives you exact reason of failure.
*/