//Singly LL 

//Program to Dsiplay additin of digits of each element
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

void SumDigit(PNODE Head)
{
    int iDigit=0,iSum=0;
    while(Head!=NULL)
    {
        iSum=0;
        int iNo=Head->data;

        while(iNo!=0)
        {
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
        printf("%d\t",iSum);

        Head=Head->next;

    }
}

int main()
{
    PNODE First=NULL;
    int iRet=0;
    //InsertFirst(&First,70);
    //InsertFirst(&First,89);
    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    SumDigit(First);

    return 0;
}