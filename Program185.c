//Doubly Linear

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;    //#

    //jithe change hoil compared to june codes tithe #
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;  //#

    if(*Head==NULL)   //LL is empty
    {
        (*Head)=newn;
    }
    else
    {
        newn->next=(*Head);
        (*Head)->prev=newn; //# only different line than Singly LL
        *Head=newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE temp=*Head;  //temporary pointer for traversal
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;  //#

    if(*Head==NULL)   //LL is empty
    {
        (*Head)=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp; //#
    }

}
void InsertAtPos(PPNODE Head, int no, int ipos)
{}
void DeleteFirst(PPNODE Head)
{
    if(*Head==NULL)  //LL is empty
    {
        return;
    }
    else if(((*Head)->prev==NULL) && ((*Head)->next==NULL))//omly one node exists in LL   //#
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        (*Head)=(*Head)->next;   //sir chya dokyat 2nd mulacha address
        free((*Head)->prev);  //#  //dusrya mulacha dava haat jyacha khandyavar ahe to del kar //temporary chi garaj nahi 
        (*Head)->prev=NULL;  //#    //jo navin first hoil tyacha dava haat khishat 
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;
    if(*Head==NULL)  //LL is empty
    {
        return;
    }
    else if(((*Head)->prev==NULL) && ((*Head)->next==NULL))//omly one node exists in LL   //#
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}
void DeleteAtPos(PPNODE Head,int ipos)
{}
void Display(PNODE Head)
{
    printf("\nContents of Linked List are: ");

    printf("NULL <=> ");
    while(Head!=NULL)
    {
        printf("| %d | <=> ",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt=0;
    while(Head!=NULL)
    {
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}

int main()
{
    
    PNODE First = NULL;
    int iRet=0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet=Count(First);
    printf("\nNumber of elements are:  %d",iRet);


    InsertLast(&First,101);
    InsertLast(&First,111);
    InsertLast(&First,121);

    Display(First);
    iRet=Count(First);
    printf("\nNumber of elements are:  %d",iRet);


    DeleteFirst(&First);
    Display(First);
    iRet=Count(First);
    printf("\nNumber of elements are:  %d",iRet);


    DeleteLast(&First);
    Display(First);
    iRet=Count(First);
    printf("\nNumber of elements are:  %d",iRet);

    return 0;
}
