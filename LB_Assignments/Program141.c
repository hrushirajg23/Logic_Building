//Singly LL 

//Program to search first occurence of a particular element from LL and return its position

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

int SearchFirstOcc(PNODE Head,int iNo)
{
    int iOcc=0,iCnt=0;
    while(Head!=NULL)
    {
        iCnt++;
        if((Head)->data==iNo)
        {
            iOcc=iCnt;
            break;
        }
        Head=Head->next;
        
    }
    if(Head==NULL)
    {
        return -1;
    }
    return iOcc;
}

int main()
{
    PNODE First=NULL;
    int iRet=0,iSearch=0;
    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    printf("\nEnter the element you want to search : ");
    scanf("%d",&iSearch);

    iRet=SearchFirstOcc(First,iSearch);

    printf("\nThe position of elements is : %d",iRet);

    return 0;
}