#include <stdio.h>
#include <stdint.h>

float calculate(int b, float y){
    return y/(3.051757813e-05f) * (float)((uint32_t)1 << (15 - (b)));
}

int main(){
    printf("%f", calculate(0, -6024.09f));
    return 0;
}

/*
float calculate(void){
    return -1000/0.166096;
}

int main(){
    printf("%f", calculate());
    return 0;
}
*/