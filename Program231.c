//Summation of all elements

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

int Sum(PNODE Head)
{
    int iSum=0;
    while(Head!=NULL)
    {
        iSum=iSum+(Head->data);
        Head=Head->next;
    }
    return iSum;

}

int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,111);
    InsertFirst(&First,100);
    InsertFirst(&First,50);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet=Sum(First);
    printf("Summation of all elements is: %d",iRet);


    return 0;
}