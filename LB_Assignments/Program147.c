//Singly LL 

//Program to display elements which are prime from LL
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

void DisplayPrime(PNODE Head)
{
    int iCnt=0;
    bool bprime=false;
    while(Head!=NULL)
    {
        bprime=false;
        for(iCnt=2;iCnt<=((Head->data)/2);iCnt++)
        {
            if((Head->data)%iCnt==0)
            {
                bprime=true;
                break;
            }
        }
        if(bprime==false)
        {
            printf("%d\t",Head->data);
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

    DisplayPrime(First);
    return 0;
}