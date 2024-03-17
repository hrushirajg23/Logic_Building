

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

int MiddleElement(struct Node *head)
{
    struct Node *slow=head;
    struct Node *fast=head;

    while(fast!=NULL && fast->next=NULL)
    {
        fast=fast->next;
        if(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
    }

    return slow->data;

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
    InsertFirst(&First,151);
    InsertFirst(&First,121);   //if madhe janar
    InsertFirst(&First,111);   //else madhe janar
    InsertFirst(&First,101);   //else madhe janar
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    
    Display(First);
    iRet=Count(First);
    printf("\nNumber of nodes are: %d\n",iRet);

    iRet=MiddleElement(First);
    printf("\nMIddle element is: %d\n",iRet);


   
    return 0;  
}