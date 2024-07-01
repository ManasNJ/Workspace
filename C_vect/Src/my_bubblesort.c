
#include "../Inc/C_Globalheader.h"
void main()
{
    int arr[10];
    printf("Enter 10 integers for array: \n");

    for(int i=0; i<10; i++)
    scanf("%d", &arr[i]);
    printf("\n");

    printf("Array elements are: \n");
    for(int i=0; i<10; i++)
    printf("%d ", arr[i]);

    for(int i=0; i<10; i++)
    {
        int f=0;

        for(int j=0; j< 10-i-1; j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]^=arr[j]^=arr[i]^=arr[j];
                f=1;
            }      
        }

        if(0==)
    }
}