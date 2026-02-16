/* In this file, we define the print function which is a variadic function to handle multiple arguments 
printf is built on same fundamental concept.
This is an add on from personal learnings, to guru sir's linux lecture  */

#include <stdio.h>
#include <stdarg.h>

void print(char *p, ...){    // using variadic function to handle multiple arguments
    va_list args;       // declare a variable to hold the list of arguments
    va_start(args, p);  // point to the first argument after the format string
    vprintf(p, args);   // print the formatted string with the argument induced.
    va_end(args);     // clean up the argument list
}