
#include "..\Include\SLLheader.h"

int main()
{
    struct SLL *headptr = 0;
    int op=0;

    while(1)
    {
        printf("Enter your choice \n");
        printf("1)add_begin 2)add_end 3)PrintAllNodes 18)Exit \n");

        scanf("%d", &op);
        switch(op)
        {
            case 1: add_begin(&headptr); break;
            case 2: add_end(&headptr); break;
            case 3: PrintAllNodes(headptr); break;
            
            
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

void add_end(struct SLL** hptr)
{
    struct SLL *endNode = (struct SLL*)malloc(sizeof(struct SLL));
    printf("Enter the rollno, name & marks: \n");
    scanf("%d %s %f", &endNode->rollno, endNode->name, &endNode->marks);
    endNode->next=0;
    
    if(*hptr)
    {
        while((*hptr)->next)
        (*hptr) = (*hptr)->next;
    
        (*hptr)->next=endNode; //no initially hptr
    }

    else
    *hptr=endNode;
}

void PrintAllNodes(struct SLL* hptr)
{
    if(hptr)
    {
        while(hptr)
        {
            printf("Roll No. = %d, Name = %s, Marks = %f\n", hptr->rollno, hptr->name, hptr->marks);
            hptr=hptr->next;
        }
        printf("Printing of all nodes done \n\n");
    }

    else
    printf("No Nodes present\n\n");

}