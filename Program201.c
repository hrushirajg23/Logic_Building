//Doubly Circular

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE,*PNODE, **PPNODE;


int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;
    return 0;
}