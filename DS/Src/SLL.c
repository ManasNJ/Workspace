
#include "..\Include\SLLheader.h"

int main()
{
    struct SLL *headptr = 0;
    int op=0;

    while(1)
    {
        printf("Enter your choice \n");
        printf("1)Add Begin  18)Exit \n");

        scanf("%d", &op);
        switch(op)
        {
            case 1: add_begin(&headptr); break;
            
            
            case 18: exit(0);
            default: printf("Invalid Choice \n");
        }
    };  
}     

void add_begin(struct SLL **hptr)
{
    struct SLL *newNode = (struct SLL*)malloc(sizeof(struct SLL));                               //Created a newNode node by allocating dynamic memory to it.
    printf("Enter values of rollno, name(upto 10 characters) & marks \n");      
    scanf("%d %s %f", &newNode->rollno, newNode->name, &newNode->marks);                    /*Scanned values, notice that for rollno & marks we attached '&" operator
    because we want to store value of rollno at address of newNode-> rollno. you can see it as "&(newNode->rollno)". Similar to the way that we actually scan integers
    .Similarly for marks "&(newNode->marks)" whereas for name no need because string name itself depicts address. So no need to attach '&' sign explicitly 
    while scanning name */       
    newNode->next=*hptr;   //no initially hptr=0. therefore now end of newNode node will hold address null. hence equated with hptr.
    *hptr=newNode;          //but hptr should now hold newNode nodes address hence, *hptr= newNode.
}

