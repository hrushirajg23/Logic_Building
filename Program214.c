//Stack
//Same as Singly LInear LL only Insert First and Delete First functions used

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

//void InsertFirst(PPNODE Head,int No)
void Push(PPNODE Head,int No)
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
//void DeleteFirst(PPNODE Head,int No)
int Pop(PPNODE Head)   //return value is Intger karan to integer data kadhun denar node madhla
{
    int iValue=0;
    PNODE temp=(*Head);

    if(*Head==NULL)
    {
        printf("\nSTACK IS EMPTY\n");
    }
    else
    {
        iValue=(*Head)->data;
        (*Head)=(*Head)->next;
        free(temp);
    }

    return iValue;
}

void Display(PNODE Head)
{
    printf("\nElements of stack are: \n");
    while(Head!=NULL)
    {
        printf("| %d |\n",Head->data);
        Head=Head->next;
    }
}

int main()
{
    int iRet=0;
    PNODE first=NULL;

    Push(&first,101);
    Push(&first,51);
    Push(&first,21);
    Push(&first,11);
    Display(first);

    iRet=Pop(&first);
    printf("\nPoped element is %d\n",iRet);

    iRet=Pop(&first);
    printf("\nPoped element is %d\n",iRet);

    iRet=Pop(&first);
    printf("\nPoped element is %d\n",iRet);

    iRet=Pop(&first);
    printf("\nPoped element is %d\n",iRet);

    Display(first);
    return 0;
}