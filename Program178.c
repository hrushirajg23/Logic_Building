//DeleteAt Position function

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;  //to hold address of next Node
};

typedef struct Node NODE;
typedef struct Node*  PNODE;
typedef struct Node**  PPNODE;

void InsertFirst(PPNODE Head,int No) //PPNODE Head stores address of First to Manipulate it, int No is the jersey number
{
    PNODE newn =(PNODE)malloc(sizeof(NODE)); //dynamically allocated node

    newn->data=No;
    newn->next=NULL;

    if(*Head==NULL) //jar LinkedList rikami ahe
    {
        *Head=newn;   
    }
    else            //LinkedList rikami nahie, it contains atleast one node in it
    {
        newn->next=*Head;
        *Head=newn;
    }
}

void InsertLast(PPNODE Head,int No)
{
    //Temporary pointer for LL traversal
    PNODE temp=*Head;  //we use temporary so that First int main doesn't 
    PNODE newn = (PNODE)malloc(sizeof(NODE)); // dynamically allocated node

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL) // jar LinkedList rikami ahe
    {
        *Head = newn;
    }
    else
    {
        while(temp->next!=NULL)   //Travel LL till last Node (till student jyacha haat khishat ahe)
        {
            temp=temp->next;     
        }   
        temp->next=newn;    //Khishat haat aslelya mulacha haat navin add zhalelya mulacha khandyavar thevla;
    }
}


void DeleteFirst(PPNODE Head)
{
    PNODE temp=*Head;
    if(*Head==NULL)  //Case 1:Rikami LL
    {
        return;
    }
    else if((*Head)->next==NULL) //Case 2: LL contaiining only one node
    {
        free(*Head);        //memory deallocation
        *Head=NULL;         //Sir la sangaycha ki ground var koni nahi so Sir NULL address hold karnar

    }
    else        //Case 3:LL contains more that one node
    {
        *Head=(*Head)->next;   //bracket dena is important because of operator precedence //we give '*' priority than arrow operator
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;
    if(*Head==NULL)  //Case 1:Rikami LL
    {
        return;
    }
    else if((*Head)->next==NULL) //Case 2: LL contaiining only one node
    {
        free(*Head);        //memory deallocation
        *Head=NULL;         //Sir la sangaycha ki ground var koni nahi so Sir NULL address hold karnar
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


void Display(PNODE Head)
{
    printf("Contents of Linked List are: \n");
    
    while(Head!=NULL)
    {
        printf("| %d | -> ",Head->data);
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

void InsertAtPos(PPNODE Head,int No,int iPos)
{
    int Size=0;
    Size=Count(*Head);
    PNODE newn=NULL;
    int i=0;
    PNODE temp=*Head;

    //Case 1:Invalid Position

    if((iPos<1) || (iPos>Size+1))    //filter
    {
        printf("\nInvalid Position! ");
        return;
    }

    //Case 2:1st Posiiton

    if(iPos==1)
    {
        InsertFirst(Head,No);
    }

    //Case 3:Last POsiition

    else if(iPos==Size+1)
    {
        InsertLast(Head,No);
    }

    //Case 4:Position in between first and last

    else
    {
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->next=NULL;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next=newn;

    }

}


void DeleteAtPos(PPNODE Head,int iPos)
{
    int Size=0;
    Size=Count(*Head);
    PNODE temp=*Head;
    PNODE targetednode=NULL;
    int i=0;

    //Case 1:Invalid Position

    if((iPos<1) || (iPos>Size))    //filter
    {
        printf("\nInvalid Position! ");
        return;
    }

    //Case 2:1st Posiiton

    if(iPos==1)             //Example:1st Position
    {
        DeleteFirst(Head);
    }

    //Case 3:Last POsiition 

    else if(iPos==Size)     //Ex:6
    {
        DeleteLast(Head);
    }

    //Case 4:Position in between first and last  //Ex:5

    else
    {
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        targetednode=temp->next;

        temp->next=temp->next->next;
        free(targetednode);
    }

}

int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,111);   //if madhe janar
    InsertFirst(&First,101);   //else madhe janar
    InsertFirst(&First,51);   //else madhe janar
    InsertFirst(&First,21);   //else madhe janar
    InsertFirst(&First,11);   //else madhe janar
    InsertLast(&First,121);

    InsertAtPos(&First,105,5);  //105 gets inserted


    Display(First);
    iRet=Count(First);
    printf("\nNumber of nodes are: %d\n",iRet);


    DeleteAtPos(&First,5);      //105 gets deleted


    Display(First);
    iRet=Count(First);
    printf("\nNumber of nodes are: %d\n",iRet);
    return 0;  
}