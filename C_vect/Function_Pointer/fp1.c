// System Programming, involves how to connect/communicate with OS.

/*
int *p(int , int)
P is a function which takes two integers and return integer pointer.

int (*p)[2]
P is a pointer pointing to array of two integers (Pointer to an array)

int (*p)(int , int)
P is a function pointer which can hold address of a function which takes two integers as arguments and return integer.
(Funtion name defines base address of a function)

void (*p)(void)
P is pointer to a function which takes nothing and returns nothing.
*/


#include <stdio.h>

int sum (int a , int b){
    return a+b;
}

int sub (int a , int b){
    return a-b;
}

int mul (int a , int b){
    return a*b;
}

int div (int a , int b){
    return a/b;
}

int main(){

    int i=10, j=20, k;

    //int (*p)(int , int ); //Function pointer declaration.
    //p = sum;             //Assigning a function address to function pointer (In this case sum function address).

    // Instead, of longer process in above 2 lines, we can also initialize a function pointer right away in one line.
    int (*p)(int,int) = sum;

    k = (*p)(i,j);       //Indirectly calling the sum function to execute addition operation.

    printf ("k = %d\n", k);
}

