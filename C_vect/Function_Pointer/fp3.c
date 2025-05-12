// Design a function which returns function address 

#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int (*abc(void))(int,int){
/* 'abc' is a function which takes nothing and return a functions address. 
If you observe in above syntax of function definition '( )' operator has higher precedency over '*' operator. */
return sum;
}

int main(){

    int i = 10, j =20, k;

    int (*p)(int, int) = abc(); /*notice the difference in function ptr initializtion, 
    compared to fp1.c. In fp1, we were directly assigning sum function address to p.  
    Fp1.c had direct function pointer initialization. Whereas here we are having indirect function pointer
    initialization.
    here abc() is a function which return sum function address. 
    Through conditional statements , we can change the behaviour of abc. That is we can decide which function 
    address abc should return. sum address or sub/mul/div, etc.
    basically that function call abc() , we are assigning to function pointer p.
    Internally , abc call will return sum function address and assign that sum function address to p.
    */

    k = (*p)(i,j); /* here indirectly through p ,(further abc is returning sum function address) you are calling 
    the sum function and storing return value of sum function in k. */

    printf("k = %d \n ", k);
}