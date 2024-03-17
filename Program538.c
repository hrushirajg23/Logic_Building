#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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


bool LoopCheck(PNODE Head)
{
    PNODE slow=Head;
    PNODE fast=Head;

    bool bFlag=false;


    while(fast->next!=NULL && fast!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow)
        {
            bFlag=true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    bool bRet=false;
    PNODE First=NULL;

    PNODE ThirdNode=NULL;

    PNODE LastNode=NULL;
    int iRet=0;
    InsertFirst(&First,151);
    InsertFirst(&First,121);   //if madhe janar
    InsertFirst(&First,111);   //else madhe janar
    InsertFirst(&First,101);   //else madhe janar
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    

    ThirdNode=(First);
    LastNode=First;
    ThirdNode=ThirdNode->next->next;

    LastNode=LastNode->next->next->next->next;

    LastNode->next=ThirdNode;
    
    bRet=LoopCheck(First);

    if(bRet==true)
    {
        printf("Cycle detected\n");
    }
    else
    {
        printf("No cycle\n");
    }


   
    return 0;  
}