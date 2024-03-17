//Doubly Circular

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE,*PNODE, **PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int No)
{}

void InsertLast(PPNODE Head,PPNODE Tail,int No)
{}

void InsertAtPosition(PPNODE Head,PPNODE Tail,int No,int iPos)
{}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{}

void DeleteLast(PPNODE Head,PPNODE Tail)
{}

void DeleteAtPosition(PPNODE Head,PPNODE Tail)
{}

void Display(PNODE Head,PNODE Tail)
{}

int Count(PPNODE Head,PPNODE Tail)
{
    return 0;
}

int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;
    return 0;
}