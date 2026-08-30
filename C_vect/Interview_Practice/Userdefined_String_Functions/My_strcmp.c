#include <stdio.h>

void my_strcmp(char *m, char *t){

    int l1=0, l2=0, f=0;
    for(l1=0; m[l1]; l1++);
    for(l2=0; t[l2]; l2++);

    if(l1!=l2){
        printf("Strings are not equal\n");
        return;
    }

    else if(l1==l2){
        for(int i=0; i<l1; i++){
            if(m[i]!=t[i]){
                printf("Strings are not equal\n");
                return;
            }
        }
        printf("Strings m=%s and t=%s are equal\n", m, t);    
    }
}
int main(void){

    char m[10], t[10];
    printf("Enter the first string: ");
    scanf("%s", m);
    printf("Enter the second string: ");
    scanf("%s", t);
    my_strcmp(m, t);    
}