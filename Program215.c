//Queue
//Same as Singly LInear LL only Insert Last and Delete First functions used

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

//void InsertLast(PPNODE Head,int No)
void Enqueue(PPNODE Head,int No)
{
    PNODE temp=(*Head);
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
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
}
//void DeleteFirst(PPNODE Head,int No)
int Dequeue(PPNODE Head)   //return value is Intger karan to integer data kadhun denar node madhla
{
    int iValue=0;
    PNODE temp=(*Head);

    if(*Head==NULL)
    {
        printf("\nQueue IS EMPTY\n");
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
    printf("\nElements of Queue are: \n");
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
    
    Enqueue(&first,11);
    Enqueue(&first,21);
    Enqueue(&first,51);
    Enqueue(&first,101);
    Enqueue(&first,111);

    Display(first);

    iRet=Dequeue(&first);
    printf("\nRemoved element is %d",iRet);
    iRet=Dequeue(&first);
    printf("\nRemoved element is %d",iRet);
    iRet=Dequeue(&first);
    printf("\nRemoved element is %d",iRet);
    iRet=Dequeue(&first);
    printf("\nRemoved element is %d",iRet);

    
    return 0;
}