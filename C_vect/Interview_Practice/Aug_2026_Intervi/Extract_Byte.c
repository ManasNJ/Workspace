
#include <stdio.h>
int main(){

int num = 0x11223344; 
int val;
int choice;

printf("Enter the byte number that you wanna extract\n");
scanf("%d", &choice);

if (1 == choice)
val = num & 0xFF;

if (2 == choice)
val = (num >> 8) & 0xFF;

if (3 == choice)
val = (num>>16) & 0xFF;

if (4 == choice)
val = (num>>24)& 0xFF;

printf("0x%x\n", val);

return 0;
}