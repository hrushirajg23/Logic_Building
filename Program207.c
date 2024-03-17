//Doubly Circular  Delete First

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
{
    if(((*Head)==NULL) && ((*Tail)==NULL))
    {
        return;

    }
    else if((*Head)==(*Tail))
    {
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
    }
    else
    {
        (*Head)=(*Head)->next;
        free((*Head)->prev);

        (*Tail)->next=(*Head);
        (*Head)->prev=(*Tail);
    }

}

void DeleteLast(PPNODE Head,PPNODE Tail)
{}

void DeleteAtPosition(PPNODE Head,PPNODE Tail)
{}

void Display(PNODE Head,PNODE Tail)
{
    printf("\nAddress of Last Node <=> ");
    if(((Head)!=NULL) && ((Tail)!=NULL))
    {
        do
        {
            printf("| %d | <=>",Head->data);
            Head=Head->next;
        }while(Head!=Tail->next);
        printf(" Address of First node");
    }
}

int Count(PNODE Head,PNODE Tail)
{
    int iCnt=0;
    if(((Head)!=NULL) && ((Tail)!=NULL))
    {
        do
        {
            iCnt++;
            Head=Head->next;
        }while(Head!=Tail->next);
    }
    return iCnt;
}

int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;

    int iRet=0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNUmber of Nodes are: %d",iRet);

    DeleteFirst(&First,&Last);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNUmber of Nodes are: %d",iRet);

    return 0;
}