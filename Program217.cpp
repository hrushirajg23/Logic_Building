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
            cout<<"Inside Constructor\n";
            First=NULL;
            Count=0;
        }
        void InsertFirst(int No)  //Function defined inside class
        {}
        void InsertLast(int No)
        {}
        void Display()
        {}
};


int main()
{
    SinglyLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();

    cout<<"\nNUmber of elements in the linked list are "<<obj.Count<<" \n";
    return 0;
}