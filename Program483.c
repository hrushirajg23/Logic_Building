//Searching

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


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

void Inorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Inorder(Head->lchild);
        printf("%d\n",Head->data);
        Inorder(Head->rchild);
    }
}
void Preorder(PNODE Head)
{
    if(Head!=NULL)
    {
        printf("%d\n",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}
void Postorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\n",Head->data);
    }
}

bool Search(PNODE Head,int No)
{
    bool bFlag=false;

    if(Head==NULL)
    {
        printf("Tree is empty\n");
        return false;
    }

    while(Head!=NULL)
    {
        if(No==Head->data)
        {
            bFlag=true;
            break;
        }
        else if(No > Head->data)
        {
            Head=Head->lchild;
        }
        else if(No < Head->data)
        {
            Head=Head->rchild;
        }
    }
    return bFlag;
}

int main()
{
    PNODE First=NULL;
    
    Insert(&First,21);
    Insert(&First,11);    
    Insert(&First,17);    
    Insert(&First,45);
    Insert(&First,10);    
    Insert(&First,78);    
    Insert(&First,30);
    Insert(&First,5);
    Insert(&First,11);    

    Inorder(First);
    return 0;
}