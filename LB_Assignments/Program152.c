//Singly LL 

//Program to display all palindrome elements from LL
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

void DisplayPalindrome(PNODE Head)
{
    int iDigit=0,iNo=0,iRev=0;
    while(Head!=NULL)
    {
        iNo=Head->data;
        iRev=0;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            iRev=(iRev*10)+iDigit;
        
        }
        if(iRev==(Head->data))   //jar number ulta karun pn same asel tar tar that is palindrome
        {
            printf("%d\t",iRev);
        }
        
        Head=Head->next;
    }
}
int main()
{
    PNODE First=NULL;
    int iRet=0;
    //InsertFirst(&First,70);
    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,414);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    DisplayPalindrome(First);

    return 0;
}