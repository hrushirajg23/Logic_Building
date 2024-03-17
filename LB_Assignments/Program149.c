//Singly LL 

//Program to return second maximum element from LL
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

int SecondMaximum(PNODE Head)
{
    int iNo=0;
    int iMax=(Head->data);
    int temp=0;
    int iMax2=(Head->next->data);
    while(Head!=NULL)
    {
        iNo=(Head->data);
        if(iNo>iMax2)
        {
            iMax2=iNo;
        }
        if(iMax2>iMax)
        {
            temp=iMax;
            iMax=iMax2;
            iMax2=temp;
        }

        Head=Head->next;
    }
    return iMax2;
}

int main()
{
    PNODE First=NULL;
    int iRet=0;
    InsertFirst(&First,70);
    InsertFirst(&First,890);
    InsertFirst(&First,600);
    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet=SecondMaximum(First);

    printf("%d\t",iRet);
    
    return 0;
}