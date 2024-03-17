//Singly Circular

#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE;

class SinglyCL
{
    private:
        PNODE First;
        PNODE Last;
        int Count;
    public:
    //Functions defined outside class
    SinglyCL();
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPosition(int No,int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);
    void Display();
    int CountNodes();
 
};

SinglyCL::SinglyCL()
{
    First=NULL;
    Last=NULL;
    Count=0;
}

void SinglyCL:: InsertFirst(int No)  //Function defined inside class
{}
void SinglyCL:: InsertLast(int No)
{}

void SinglyCL::DeleteFirst()
{}

void SinglyCL::DeleteLast()
{}

void SinglyCL:: Display()
{}
int SinglyCL:: CountNodes()
{
    return Count;
}

void SinglyCL::InsertAtPosition(int No,int iPos)
{}

void SinglyCL::DeleteAtPosition(int iPos)
{}

int main()
{
    return 0;
}