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

int main()
{   
    PNODE First=NULL;
    


    return 0;
}