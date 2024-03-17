//Singly LL 

//Program to display smallest digit of all elements
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

void DisplaySmall(PNODE Head)
{
    int iDigit=0,iNo=0,iMin=0;
    while(Head!=NULL)
    {
        iNo=Head->data;
        iMin=iNo%10;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            
            if(iDigit<iMin)
            {
                iMin=iDigit;
            }
            
        }
        printf("%d\t",iMin);

        Head=Head->next;
    }
}
int main()
{
    PNODE First=NULL;
    int iRet=0;
    //InsertFirst(&First,70);
    // InsertFirst(&First,89);
    // InsertFirst(&First,6);
    InsertFirst(&First,415);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);

    Display(First);

    DisplaySmall(First);

    return 0;
}