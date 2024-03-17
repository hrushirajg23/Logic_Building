#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE,**PPNODE;

// typedef struct Node NODE;
// typedef struct Node* PNODE;
// typedef struct Node** PPNODE;

int main()
{
    PNODE Head=NULL;
    PNODE Last=NULL;    //#
    return 0;
}