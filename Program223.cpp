#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE; //PPNODE lagnarach nahie

class SinglyLL
{
    private:
        PNODE First;
        int Count;
    public:
    //Functions defined outside class
    SinglyLL();
    void InsertFirst(int No);
    void InsertLast(int No);
    void DeleteFirst();
    void Display();
    int CountNodes();

        
};

//Syntax to define function outside class
/*

Return_Value Class_Name :: Function_Name()
{

}

*/


SinglyLL::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First=NULL;
    Count=0;
}
void SinglyLL:: InsertFirst(int No)  //Function defined inside class
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
void SinglyLL:: InsertLast(int No)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        PNODE temp=First;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
    Count++;
}


void SinglyLL::DeleteFirst()
{
    PNODE temp=NULL;
    if(First==NULL)
    {
        return;
    }
    else if(First->next==NULL)
    {
        free(First);
    }
    else
    {
        temp=First;
        First=First->next;
        
        delete temp;
    }
    Count--;
}

void SinglyLL:: Display()
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
int SinglyLL:: CountNodes()
{
    return Count;
}


int main()
{
    SinglyLL obj;
    int iRet=0;
    
    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();

    obj.InsertLast(121);
    obj.Display();

    iRet=obj.CountNodes();

    cout<<"\nNUmber of elements in the linked list are "<<iRet<<" \n"; //cannot access private member count
    return 0;
}