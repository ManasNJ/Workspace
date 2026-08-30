#include <stdio.h>
int main(){

    int x=2;
    x = x >> 1;

    printf("%d\n", x);
}

/* Remember that by default, integer datatype is signed integer.
    if number is positive, 32nd bit that is signed bit is 0
    if negaticve number, 32nd bit is 1
    
    So here output will be 1, as it is positive number, on right shift, 31st and 32nd bit still remains 1.
    */