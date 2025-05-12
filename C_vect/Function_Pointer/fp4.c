/*
example 1 :

 char *(*q(int, char))(int);
q is a function which takes int and char as arguments and returns a pointer to a function (that function
will take integer as arguments and returns character pointer (char*))
So basically , q is returning address of a function, that function is further returning a character pointer.

example 2 :

    int (*mno(int))(char);
mno is a function which takes integer and returns pointer to a function(it returns add of one function) 
which takes character as argument and returns int.    

*/

// The concept used in fp3.c can be written in a more simple and comfortable way using concept of function pointers.

#include <stdio.h>

typedef int(*FPTR)(int,int);  /* FPTR is a function that takes nothing and returns ptr to a function which takes two integers 
                                 as argument and returns an integer 
                                 After attaching typedef to that declaration , "FPTR" has become a datatype. */

int sum(int m, int n){
    return m+n;
}

FPTR abc(void){
/* abc is a function which takes nothing. Which returns a pointer to function which takes two integer arguments and returns an integer. */
return sum;
}

int main(){
    int i=10, j=20, k; 

// int (*p)(int,int);  --> This declaration can be written in another way as shown below.
    // Without typedef , p would have been a function ptr variable.
    // With typedef, FPTR is a function ptr datatype.

    FPTR p;  // p is a variable of function pointer type.

    p = abc();
    k = (*p)(i,j);

    printf("k = %d\n", k);
}



