
#include <stdio.h>
typedef unsigned char uint8_t;
int main(){
    uint8_t n, c=0;
    printf("Enter the number: \n");
    scanf("%d", &n);

    for(uint8_t i=0; n; n=n/10){
        c++;
    }
    printf("Number of digits: %d\n", c);

    return 0;
}