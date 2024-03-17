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
{}

void InsertAtPosition(PPNODE Head,PPNODE Tail,int No,int iPos)
{}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{}

void DeleteLast(PPNODE Head,PPNODE Tail)
{}

void DeleteAtPosition(PPNODE Head,PPNODE Tail,int No,int iPos)
{}

void Display(PNODE Head,PNODE Tail)
{}

int Count(PNODE Head,PNODE Tail)
{
    return 0;
}


int main()
{
    PNODE Head=NULL;
    PNODE Last=NULL;    //#

    

    return 0;
}