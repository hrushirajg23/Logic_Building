#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE; //PPNODE lagnarach nahie

class SinglyLL
{
    public:
        PNODE First;
        int Count;
        SinglyLL()
        {
            First=NULL;
            Count=0;
        }
        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPosition(int No,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(,int iPos);
        void Display();
};


int main()
{
    SinglyLL obj;

    obj.InsertFirst(51);
    obj.InsertLast(21);
    obj.Display();
    return 0;
}