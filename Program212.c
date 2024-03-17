//Stack
//Same as Singly LInear LL only Insert First and Delete First functions used

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

//void InsertFirst(PPNODE Head,int No)
void Push(PPNODE Head,int No)
{

}
//void DeleteFirst(PPNODE Head,int No)
int Pop(PPNODE Head,int No)   //return value is Intger karan to integer data kadhun denar node madhla
{
    return 0;
}

void Display(PNODE Head)
{}

int main()
{
    PNODE first=NULL;
    return 0;
}