#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

struct SLL{
    int rollno;
    char name[10];
    float marks;
    struct SLL *next;
};


/*Function Prototypes */
void add_begin(struct SLL**);
void add_end(struct SLL**);
void PrintAllNodes(struct SLL*);
