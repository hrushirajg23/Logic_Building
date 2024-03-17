//Doubly Circular InsertLast

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE,*PNODE, **PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int No)
{
    //1.create new node
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    //2.Initialising node

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    //3.Check if LL is empty or contains more than one node in it

    if(((*Head)==NULL) && ((*Tail)==NULL))  //LL is empty
    {
        (*Head)=newn;
        (*Tail)=newn;
    }
    else                                //LL contains atleast one node
    {
        newn->next=(*Head);
        (*Head)->prev=newn;
        (*Head)=newn;
    }
    (*Tail)->next=(*Head);
    (*Head)->prev=(*Tail);
}

void InsertLast(PPNODE Head,PPNODE Tail,int No)
{
    //1.create new node
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    //2.Initialising node

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    //3.Check if LL is empty or contains more than one node in it

    if(((*Head)==NULL) && ((*Tail)==NULL))  //LL is empty
    {
        (*Head)=newn;
        (*Tail)=newn;
    }

    else
    {
        (*Tail)->next=newn;
        newn->prev=(*Tail);
        (*Tail)=newn;
    }
    (*Tail)->next=(*Head);
    (*Head)->prev=(*Tail);
}

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

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    InsertFirst(&First,&Last,101);
    InsertFirst(&First,&Last,111);
    InsertFirst(&First,&Last,121);
    return 0;
}