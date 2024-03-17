//Display even elements in the Singly LL

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

void EvenDisplay(PNODE Head)
{
    printf("\nEven Elements are: \n");

    while(Head!=NULL)
    {
        if(((Head)->data)%2==0)
        {
            printf("%d\n",Head->data);
        }
        Head=Head->next;
    }
}

int main()
{
    PNODE First=NULL;

    InsertFirst(&First,111);
    InsertFirst(&First,100);
    InsertFirst(&First,50);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    EvenDisplay(First);


    return 0;
}