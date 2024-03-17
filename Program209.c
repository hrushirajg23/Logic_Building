//Doubly Circular DeleteAtPosition

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
        free((*Head)->prev);  //free((*Tail)->next)

        (*Tail)->next=(*Head);
        (*Head)->prev=(*Tail);
    }

}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    if(((*Head)==NULL) && ((*Tail)==NULL))
    {
        return;
    }
    else if((*Head)==(*Tail))
    {
        free(*Tail); //or free(*Head)
        (*Head)=NULL;
        (*Tail)=NULL;
    }
    else
    {
        (*Tail)=(*Tail)->prev;
        free((*Tail)->next);   //or free(*Head->prev)

        (*Tail)->next=(*Head);
        (*Head)->prev=(*Tail);
    }
    
}



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

void InsertAtPosition(PPNODE Head,PPNODE Tail,int No,int iPos)
{
    int iSize=0,i=0;
    iSize=Count(*Head,*Tail);
    PNODE newn=NULL;
    PNODE temp=(*Head);

    if(iPos <1 || iPos>iSize+1)
    {
        printf("\nINVALID POSITION....\n");
        return;
    }

    if(iPos==1)
    {
        InsertFirst(Head,Tail,No);

    }
    else if(iPos==iSize+1)
    {
        InsertLast(Head,Tail,No);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp; //or temp->next->prev=temp
    }
}

void DeleteAtPosition(PPNODE Head,PPNODE Tail,int iPos)
{
    int iSize=0,i=0;
    iSize=Count(*Head,*Tail);
    PNODE temp=(*Head);

    if(iPos <1 || iPos>iSize)
    {
        printf("\nINVALID POSITION....\n");
        return;
    }

    if(iPos==1)
    {
        DeleteFirst(Head,Tail);

    }
    else if(iPos==iSize)
    {
        DeleteFirst(Head,Tail);
    }
    else
    {

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }
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
    InsertLast(&First,&Last,151);
    InsertLast(&First,&Last,171);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNUmber of Nodes are: %d",iRet);

    DeleteFirst(&First,&Last);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNUmber of Nodes are: %d",iRet);


    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNUmber of Nodes are: %d",iRet);


    InsertAtPosition(&First,&Last,105,5);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNUmber of Nodes are: %d",iRet);

    DeleteAtPosition(&First,&Last,5);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNUmber of Nodes are: %d",iRet);

    return 0;
}