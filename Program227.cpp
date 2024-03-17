//Doubly Linear

#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE,*PNODE;

class DoublyLL
{
    private:
        PNODE First;
        int Count;
    public:
    //Functions defined outside class
    DoublyLL();
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPosition(int No,int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);
    void Display();
    int CountNodes();
 
};

DoublyLL::DoublyLL()
{
    First=NULL;
    Count=0;
}

void DoublyLL:: InsertFirst(int No)  //Function defined inside class
{}
void DoublyLL:: InsertLast(int No)
{}

void DoublyLL::DeleteFirst()
{}

void DoublyLL::DeleteLast()
{}

void DoublyLL:: Display()
{}
int DoublyLL:: CountNodes()
{
    return Count;
}

void DoublyLL::InsertAtPosition(int No,int iPos)
{}

void DoublyLL::DeleteAtPosition(int iPos)
{}

int main()
{
    return 0;
}