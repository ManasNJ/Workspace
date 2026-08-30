
#include <stdio.h>
void My_strcpy(char *m, char *t){
    static int i=0;
    if(m[i]){
        t[i] = m[i];
        i++;
        My_strcpy(m, t);
    }

    else{
        t[i] = '\0';
        printf("Copied string is: %s\n", t);
    }
}

int main(void){
    char m[10] = "Manas", t[10];
    My_strcpy(m, t);
}

