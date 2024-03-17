//Delete First  function

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

int main()
{
    PNODE First=NULL;

    int iRet=0;

    InsertFirst(&First,111);   //if madhe janar
    InsertFirst(&First,101);   //else madhe janar
    InsertFirst(&First,51);   //else madhe janar
    InsertFirst(&First,21);   //else madhe janar
    InsertFirst(&First,11);   //else madhe janar

    Display(First);
    iRet=Count(First);
    printf("\nNumber of nodes are: %d\n",iRet);


    InsertLast(&First,121);
    InsertLast(&First,151);

    Display(First);
    iRet=Count(First);
    printf("\nNumber of nodes are: %d\n",iRet);


    DeleteFirst(&First);

    Display(First);
    iRet=Count(First);
    printf("\nNumber of nodes are: %d\n",iRet);

   

    return 0;  
}