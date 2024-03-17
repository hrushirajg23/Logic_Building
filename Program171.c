//InsertFirst function

#include<stdio.h>
#include<stdlib.h>

//Structure declaration
struct Node
{
    int data;           //4bytes   //mulacha shirt varcha number 
    struct Node *next;  //8bytes  //mulacha ek haat
};

typedef struct Node NODE; 
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    //Step 1:Allocate memory for node
    PNODE newn=NULL;        //struct Node* newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    //Step 2:Initialise the node

    newn->data=No;
    newn->next=NULL;

    //Step 3:Check whether LinkedList is empty or not

    if(*Head==NULL) //LL is empty  //pahilach node
    {
        *Head=newn;
    }
    else            //LL contains atleast 1 node in it
    {
        newn->next=*Head;
        *Head=newn;
    }
 
}

void Display(PNODE Head)
{
    printf("\nElements of Linked List are: ");

    while(Head!=NULL)
    {
        printf("| %d | -> ",Head->data);
        Head=Head->next;
         
    }
    printf("NULL \n");
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
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);  //Display(100)

    iRet=Count(First);

    printf("\nNumber of nodes are: %d\n",iRet);

    return 0;
}
