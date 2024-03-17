//Generic Singly LinkedList

#include<iostream>
using namespace std;

template<class T>
struct Node
{
    T data;  
    struct Node *next;
}; 


template<class T>
class SinglyLL
{
    private:
        struct Node<T> * First;
        int Count;
    public:
    //Functions defined outside class
    SinglyLL();
    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPosition(T No,int iPos);
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

template<class T>
SinglyLL<T>::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First=NULL;
    Count=0;
}
template<class T>
void SinglyLL<T>:: InsertFirst(T No)  //Function defined inside class
{
    struct Node<T> * newn=NULL;
    newn =new struct Node<T>;
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
template<class T>
void SinglyLL<T>:: InsertLast(T No)
{
    struct Node<T> * newn=NULL;
    newn=new struct Node<T>;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        struct Node<T> * temp=First;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
    Count++;
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
    struct Node<T> * temp=NULL;
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

template<class T>
void SinglyLL<T>::DeleteLast()
{
    struct Node<T> * temp=NULL;
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

template<class T>
void SinglyLL<T>:: Display()
{
    struct Node<T> * temp=First;
    cout<<"\nElements of Linked List are: \n";
    while(temp!=NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
template<class T>
int SinglyLL<T>:: CountNodes()
{
    return Count;
}

template<class T>
void SinglyLL<T>::InsertAtPosition(T No,int iPos)
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
        struct Node<T> * newn=NULL;
        newn= new struct Node<T>;
        newn->data=No;
        newn->next=NULL;
        struct Node<T> * temp=First;
        int i=0;
        for(i=1;i<iPos-1;i++)
        {   
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

    }
}
template<class T>
void SinglyLL<T>::DeleteAtPosition(int iPos)
{
    if(iPos<1 || iPos>Count)
    {
        cout<<"\nINVALID INPUT"<<endl;
        return;
    }
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==Count)
    {
        DeleteLast();
    }
    else
    {
        struct Node<T> * TargetedNode=NULL;

        struct Node<T> * temp=First;
        int i=0;
        for(i=1;i<iPos-1;i++)
        {   
            temp=temp->next;
        }
        TargetedNode=temp->next;
        temp->next=temp->next->next;

        delete TargetedNode;
        
        Count--;
    }
}


int main()
{
    SinglyLL<int> obj;
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

    obj.DeleteAtPosition(5);
    obj.Display();

    iRet=obj.CountNodes();

    cout<<"\nNUmber of elements in the linked list are "<<iRet<<" \n"; 


    
    return 0;
}