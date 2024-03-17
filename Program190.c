#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;


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

void DeleteAtPosition(PPNODE Head,PPNODE Tail,int No,int iPos)
{}

void Display(PNODE Head,PNODE Tail)
{}

int Count(PNODE Head,PNODE Tail)
{
    return 0;
}


int main()
{
    PNODE Head=NULL;
    PNODE Last=NULL;    //#
    return 0;
}