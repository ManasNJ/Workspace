/*
What is callback function ?

- If we sent and integer to a function , we catch it with an integer.
- If we send address of an integer to a function , we catch it with integer pointer.
- If we send a string to a function , we catch it with character ptr.
- Similarly , if we send address of a function to a function, we catch it with function ptr.

Callback funtion : The function which takes another function as an argument, is called callback function. 

In below program , we want to call the sum function. 
We as in, main function wants to call the sum function. But it won't call sum function directly.
Instead it will send the sum function address to callback function. Callback function calls the sum function on 
behalf of main & returns the solution of addition to the main function.
In future , while OS level programming there will be some instances where we can't call a function directly from
main. Instead we will send that function address from main to another function. That another function will 
execute the desired function on behalf of main.
(Example : call to Static functions )
*/

#include <stdio.h>

int sum(int p, int q){
    return p+q;
}

int callback_function(int i, int j, int(*p)(int, int)){ /* This is a callback function , it is taking three arguments
First argument is integer , second aswell is integer.
Third argument is function pointer.*/

int r = (*p)(i,j);
return r;
}

int main(){

    int i=10, j=20, k;

    k = callback_function(i,j,sum); // This is call to the "Callback_function"
    /* This line takes argument i & j , & also address of sum function. 
    Further in the call back function it sends these i & j to the sum function. Sum function calculates sum of 
    i & j them callback function returns that addition output, which gets assigned in k */

    printf("k = %d \n", k);

}