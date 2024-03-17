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


void InsertFirst(PPNODE Head,PPNODE Tail,int No)
{
    //1.Create new node
    struct Node *newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    //2.Initialisation
    newn->data=No;
    newn->next=NULL;

    //3.Check if LL is empty or contains atleast one node in it


    if(((*Head)==NULL) && ((*Tail)==NULL)) //LL is empty
    {
        *Head=newn;
        *Tail=newn;    
    }
    else                                    //LL contains atleast one Node
    {
        newn->next=(*Head);
        *Head=newn;    
    }

    //if else madhe (*Tail)->next=(*Head); 2nd lihnya peksha te commonly baher lihaycha
    //Cicrular Nature maintained due to this Node
    (*Tail)->next=(*Head);   //Last Node cha next points to 1st Node
}

void InsertLast(PPNODE Head,PPNODE Tail,int No)
{
    //1.Create new node
    struct Node *newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    //2.Initialisation
    newn->data=No;
    newn->next=NULL;

    //3.Check if LL is empty or contains atleast one node in it


    if(((*Head)==NULL) && ((*Tail)==NULL)) //LL is empty
    {
        *Head=newn;
        *Tail=newn;    
        (*Tail)->next=(*Head); //last node points to 1st node
    }
    else
    {
        (*Tail)->next=newn;
        *Tail=newn;         //(*Tail)=(*Tail)->next;
        (*Tail)->next=(*Head);  //last node points to 1st node

    }
}

void InsertAtPosition(PPNODE Head,PPNODE Tail,int No,int iPos)
{}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{}

void DeleteLast(PPNODE Head,PPNODE Tail)
{}

void DeleteAtPosition(PPNODE Head,PPNODE Tail,int No,int iPos)
{}

void Display(PNODE Head,PNODE Tail)
{
    printf("\nElements of Linked List are: \n");

    if(Head!=NULL && Tail!=NULL)   //LL madhe konitari ahe
    {
        //nusta while loop use kela asta tar pahilich condition false ali asti
        do                                         
        {
            printf("| %d |->",Head->data);
            Head=Head->next;

        }while(Head!=Tail->next);

        printf("Address of 1st Node\n");
    }
}

int Count(PNODE Head,PNODE Tail)
{
    int iCnt=0;
    if(Head!=NULL && Tail!=NULL)   //LL madhe konitari ahe
    {
        do
        {
            iCnt++;
            Head=Head->next;

        }while(Head!=Tail->next);

    }
    return iCnt;
}


int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;    //#

    int iRet=0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11); 

    Display(First,Last);

    iRet=Count(First,Last);

    printf("\nNumber of nodes are: %d",iRet);   
    return 0;
}