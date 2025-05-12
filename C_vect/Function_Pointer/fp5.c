// Array of Function Pointers 

#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int main(){

    int i=10, j=20, k;

    int (*p[4])(int, int); // p is an array of 4 function ptrs.
    //Using array of cuntion ptrs, you can store multiple function addresses in the array . 
    // ex: sum, sub, mul, div.
    p[0] = sum;
    p[1] = sub;
    p[2] = mul;
    p[3] = div;

    for(int m=0; m<4; m++)
    printf("%d\n",  (*p[m])(i,j)  );
 
}

 