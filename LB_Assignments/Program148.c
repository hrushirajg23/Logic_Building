//Singly LL 

//Program to return addition of all even elements from LL
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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

int AdditonEven(PNODE Head)
{
    int iSumEven=0;
    while(Head!=NULL)
    {
        if((Head->data)%2==0)
        {
            iSumEven=iSumEven+(Head->data);
        }
        Head=Head->next;
    }
    return iSumEven;
}

int main()
{
    PNODE First=NULL;
    int iRet=0;
    //InsertFirst(&First,70);
    //InsertFirst(&First,89);
    //InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet=AdditonEven(First);

    printf("\n%d",iRet);
    return 0;
}