//Singly Circular DeleteAtPosition

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


void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head)==NULL && (*Tail)==NULL)
    {
        return;
    }
    else if((*Head)==(*Tail))
    {
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
    }
    else
    {
        (*Head)=(*Head)->next;   // shikshak chya dokyatli value changed to 2nd mulacha address 

        free((*Tail)->next);   //free 1st node

        (*Tail)->next=(*Head);   //make tail point to new 1st node after deletion of 1st node
    }
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    PNODE temp=*Head;
    if((*Head)==NULL && (*Tail)==NULL)
    {
        return;
    }
    else if((*Head)==(*Tail))
    {
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
    }
    else
    {
        while(temp->next!=(*Tail))
        {
            temp=temp->next;
        }
        free(temp->next);  //or  free(*Tail)
        (*Tail)=temp;

        (*Tail)->next=(*Head);   //Last node points to 1st node(Circular Nature)
    }
}


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

void InsertAtPosition(PPNODE Head,PPNODE Tail,int No,int iPos)
{
    int iSize=0,i=0;
    iSize=Count(*Head,*Tail);
    
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    PNODE temp=(*Head);

    if(iPos<1 || iPos>iSize+1)
    {
        printf("\nINVALID POSITION..\n");
        return;
    }

    if(iPos==1)
    {
        InsertFirst(Head,Tail,No);
    }
    else if(iPos==iSize+1)
    {
        InsertLast(Head,Tail,No);
    }
    else
    {
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        
    }
}

void DeleteAtPosition(PPNODE Head,PPNODE Tail,int iPos)
{
    int iSize=0,i=0;
    iSize=Count(*Head,*Tail);

    PNODE temp=(*Head);
    PNODE targetedNode=NULL;

    if(iPos<1 || iPos>iSize)
    {
        printf("\nINVALID POSITION...\n");
        return;
    }

    if(iPos==1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(iPos==iSize)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        targetedNode=temp->next;
        temp->next=targetedNode->next;  //or temp->next=temp->next->next;

        free(targetedNode);
    }
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

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121); 
    InsertLast(&First,&Last,151); 
    InsertLast(&First,&Last,171);     


    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNumber of nodes are: %d",iRet);   


    DeleteFirst(&First,&Last);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNumber of nodes are: %d",iRet);   

    DeleteLast(&First,&Last);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNumber of nodes are: %d",iRet);   

    InsertAtPosition(&First,&Last,105,5);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNumber of nodes are: %d",iRet); 


    DeleteAtPosition(&First,&Last,5);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("\nNumber of nodes are: %d",iRet);  

    return 0;
}