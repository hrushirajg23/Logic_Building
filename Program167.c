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

    
}

int main()
{   
    PNODE First=NULL;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    


    return 0;
}