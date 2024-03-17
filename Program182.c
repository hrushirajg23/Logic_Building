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
{
    printf("\nContents of Linked List are: ");

    printf("NULL <=> ");
    while(Head!=NULL)
    {
        printf("| %d | <=> ",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt=0;
    while(Head!=NULL)
    {
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}

int main()
{
    
    PNODE First = NULL;
    int iRet=0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet=Count(First);

    printf("\nNumber of elements are:  %d",iRet);
    return 0;
}
