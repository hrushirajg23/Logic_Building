//Doubly Circular

#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE,*PNODE;

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int Count;
    public:
    //Functions defined outside class
    DoublyCL();
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPosition(int No,int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);
    void Display();
    int CountNodes();
 
};

DoublyCL::DoublyCL()
{
    First=NULL;
    Last=NULL;
    Count=0;
}

void DoublyCL:: InsertFirst(int No)  //Function defined inside class
{}
void DoublyCL:: InsertLast(int No)
{}

void DoublyCL::DeleteFirst()
{}

void DoublyCL::DeleteLast()
{}

void DoublyCL:: Display()
{}
int DoublyCL:: CountNodes()
{
    return Count;
}

void DoublyCL::InsertAtPosition(int No,int iPos)
{}

void DoublyCL::DeleteAtPosition(int iPos)
{}

int main()
{
    return 0;
}