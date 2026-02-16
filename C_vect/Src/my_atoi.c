/*This is a program of writing an "a to i" function. This function takes string input at command line &
prints out put of the strings in integer format until some characters comes up in the string.
If some character appears then it will return */

#include "../Inc/C_Globalheader.h"
int my_atoi(const char *p);

void main(int argc, char **argv)
{
    if(argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return;
    }
    printf("The string to integer converted value is : %d\n", my_atoi(argv[1]));
}

int my_atoi(const char *p)
{
    int i=0, num=0;

    if(p[0]=='-')
    i=1;

    for( ; p[i]; i++){

        if(p[i]>='0' && p[i]<='9')
        num = num*10 +(p[i]-48);

        else
        break;
    }

    if(p[0]=='-')
    num = -num;

    return num;
}