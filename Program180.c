//Doubly Linear

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;    //#

    //jithe change hoil compared to june codes tithe #
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;  //#

    if(*Head==NULL)   //LL is empty
    {
        (*Head)=newn;
    }
    else
    {
        newn->next=(*Head);
        (*Head)->prev=newn; //# only different line than Singly LL
        *Head=newn;
    }
}
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

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    return 0;
}
