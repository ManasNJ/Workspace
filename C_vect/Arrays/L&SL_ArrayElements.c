/* Pogram to find largest and second largest elements in Array */

#include <stdio.h>
int main(){
    int a[10], l=0, sl=0, i=0; 
    
    printf("Enter elements in the array: \n");
    for(int i=0; i<10; i++)
    scanf("%d", &a[i]);

    printf("Elements of array are : \n");
    for(int i=0; i<10; i++)
    printf("%d\t", a[i]);
    printf("\n");

        if(a[i] >a[i+1]){
        l = a[i];
        sl = a[i+1];
        }

        else if(a[i]<a[i+1]){
        l=a[i+1];
        sl= a[i];
        }
        
        for(i=2; i<10; i++){
            if(a[i]>l){
                sl=l;
                l=a[i];
            }

            else if(a[i]>sl)
            sl=a[i];
        }

printf ("Largest element : %d, Second Largest element: %d\n", l, sl );

}
