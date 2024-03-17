#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;    //#

    //jithe change hoil compared to june codes tithe #
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{}
void InsertLast(PPNODE Head, int no)
{}
void InsertAtPos(PPNODE Head, int no, int ipos)
{}
void DeleteFirst(PPNODE Head)
{}
void DeleteLast(PPNODE Head)
{}
void DeleteAtPos(PPNODE Head,int ipos)
{}
void Display(PNODE Head)
{}
int Count(PNODE Head)
{
    return 0;
}

int main()
{
    PNODE First = NULL;

    return 0;
}
