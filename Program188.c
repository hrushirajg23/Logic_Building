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

int main()
{
    PNODE Head=NULL;
    PNODE Last=NULL;    //#
    return 0;
}