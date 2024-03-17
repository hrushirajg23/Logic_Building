//Singly LL 

//Program to return largest element from LL
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=(*Head);
        (*Head)=newn;
    }
}

void Display(PNODE Head)
{
    printf("\nElements of Linked List are: \n");

    while(Head!=NULL)
    {
        printf("| %d | -> ",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int Maximum(PNODE Head)
{
    int iMax=(Head->data);
    while(Head!=NULL)
    {
        if((Head->data)>iMax)
        {
            iMax=(Head->data);
        }
        Head=Head->next;
        
    }
    return iMax;
}

int main()
{
    PNODE First=NULL;
    int iRet=0,iSearch=0;
    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet=Maximum(First);

    printf("\nThe Largest of elements is : %d",iRet);

    return 0;
}