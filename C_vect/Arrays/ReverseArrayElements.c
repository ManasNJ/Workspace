#include <stdio.h>
int main(){
    int a[10], temp; 
    printf("Enter elements in the array: \n");

    for(int i=0; i<10; i++)
    scanf("%d", &a[i]);

    printf("Elements of array are : \n");
    for(int i=0; i<10; i++)
    printf("%d\t", a[i]);

    printf("\n");

    for(int i=0, j=9; i<j; i++, j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("After reversal array is : \n");

    for(int i=0; i<10; i++)
    printf("%d\t", a[i]);    
}