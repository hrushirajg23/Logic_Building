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
        {
            PNODE newn=NULL;
            newn =new NODE;
            newn->data=No;
            newn->next=NULL;

            if(First==NULL)  //or (Count==0)
            {
                First=newn;
            }
            else
            {
                newn->next=First;
                First=newn;
            }
            Count++;
        }
        void InsertLast(int No)
        {}
        void Display()
        {
            PNODE temp=First;
            cout<<"\nElements of Linked List are: \n";
            while(temp!=NULL)
            {
                cout<<"| "<<temp->data<<" | -> ";
                temp=temp->next;
            }
            cout<<"NULL\n";
        }
};


int main()
{
    SinglyLL obj;
    
    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();

    cout<<"\nNUmber of elements in the linked list are "<<obj.Count<<" \n";
    return 0;
}