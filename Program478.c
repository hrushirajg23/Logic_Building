#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

    int data;
    struct Node *lchild;
    struct Node *rchild;

}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int No)
{
    PNODE newn=NULL;
    PNODE temp=*Head;   //imp

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->lchild=NULL;
    newn->rchild=NULL;

    if(*Head==NULL)   //BST is empty
    {
        *Head=newn; 
    }
    else                //BST contains atleast one node
    {
        while(1)            //Unconditional loop
        {
            if(No==temp->data)
            {
                printf("Unable to insert a data is already present\n");
                free(newn);
                break;
            }
            else if(No > temp->data)
            {
                if(temp->rchild==NULL)//jar right node ach exist nahi karat tar alela node is new right node
                {
                    temp->rchild=newn;
                    break;
                }
                temp=temp->rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild==NULL)  //jar left node ach exist nahi karat tar alela node is new left node
                {
                    temp->lchild=newn;
                    break;
                }
                temp=temp->lchild;
            }
        }
    }
}
int main()
{
    PNODE First=NULL;
    
    Insert(&First,21);
    Insert(&First,11);
    Insert(&First,51);
    return 0;
}