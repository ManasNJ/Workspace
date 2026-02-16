
#include <stdio.h>
#include <unistd.h>
void main()
{
    printf("PID: %d\n", getpid());
    printf("PPID: %d\n", getppid());
}

/* Line 6 and 7 prints process ID and parent process IDs
But these commads will only work in Linux OS

After running executable generated from above program , you will observe that two process IDs will be printed.
One of those process IDs being for Bash. Check in Readme file what is Bash. Bash is a Shell*/