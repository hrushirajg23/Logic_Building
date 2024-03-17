//Singly LL 

//Program to display perfect Numbers from elements
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

void DisplayPerfect(PNODE Head)
{
    int iSum=0,iCnt=0;
    while(Head!=NULL)
    {
        iSum=0;
        for(iCnt=1;iCnt<=((Head->data)/2);iCnt++)
        {
            if((Head->data)%iCnt==0)
            {
                iSum=iSum+iCnt;
            }
        }
        if((Head->data)==iSum)
        {
            printf("%d\t",iSum);
        }
        Head=Head->next;
        
    }
    
}

int main()
{
    PNODE First=NULL;
    int iRet=0,iSearch=0;
    //InsertFirst(&First,70);
    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    DisplayPerfect(First);
    return 0;
}