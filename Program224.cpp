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
    void InsertAtPosition(int No,int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);
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
        delete First;
        First=NULL;
    }
    else
    {
        temp=First;
        First=First->next;
        
        delete temp;
    }
    Count--;
}

void SinglyLL::DeleteLast()
{
    PNODE temp=NULL;
    if(First==NULL)
    {
        return;
    }
    else if(First->next==NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        temp=First;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
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

void SinglyLL::InsertAtPosition(int No,int iPos)
{
    if(iPos<1 || iPos>Count+1)
    {
        cout<<"\nINVALID INPUT"<<endl;
        return;
    }
    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if(iPos==Count+1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE newn=NULL;
        newn= new NODE;
        newn->data=No;
        newn->next=NULL;
        PNODE temp=First;
        int i=0;
        for(i=1;i<iPos-1;i++)
        {   
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

        Count++;

    }
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
    obj.InsertLast(151);
    obj.InsertLast(171);
    obj.Display();

    obj.DeleteFirst();
    obj.Display();
    
    obj.DeleteLast();
    obj.Display();

    obj.InsertAtPosition(105,5);
    obj.Display();


    iRet=obj.CountNodes();

    cout<<"\nNUmber of elements in the linked list are "<<iRet<<" \n"; //cannot access private member count
    return 0;
}