#include <stdio.h>
int main(){
 printf("Hello\n");
 system("ls");
 printf("System call over");   
}

/*When we run the executable generated for above program, 
process 1 : the bash initiates the executable execution
process 2 : main function call the system function call at line 4, which internally 
initiates a bash which is process 3, and that bash initiates "ls" process which is process 4. 

Line 5 will execute only when process 3 & 4 ends or completes. 

Refer SystemCallUsage Image under Proess and Process Management Section of Linux Readme file.  */