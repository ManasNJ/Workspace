#include <stdio.h>
typedef unsigned char uint8_t;

void My_Fibonacci(uint8_t, uint8_t, uint8_t);

int main(void){
    uint8_t n1, n2;
    printf("Enter two numbers to start the Fibonacci series: \n");
    scanf("%hhu %hhu", &n1, &n2);
    
    printf("Fibonacci series starting with %hhu and %hhu is: \n", n1, n2);
    printf("%hhu %hhu ", n1, n2);

    My_Fibonacci(n1, n2, 10);
    return 0;
}

void My_Fibonacci(uint8_t n1, uint8_t n2, uint8_t terms){
    uint8_t next;

    if (terms == 0)
        return;

    next = n1 + n2;
    printf("%hhu ", next);
    My_Fibonacci(n2, next, terms - 1);
}

/*
hh means char-sized integer, and u means unsigned.

Common types
Type	scanf specifier	printf specifier
unsigned char	%hhu	%hhu
unsigned short	%hu	%hu
unsigned int	%u	%u
int	%d	%d

*/