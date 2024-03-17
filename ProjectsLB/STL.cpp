//Standard Template Library

#include<iostream>
using namespace std;

template <class T>
struct SNode 
{
    T data;
    struct SNode *next;
};

template<class T>
struct DNode
{
    T data;
    struct DNode<T> *prev;
    struct DNode<T> *next;
};


template <class T>
class SinglyLL
{
    private:
        struct SNode<T> *First;
        int Count;
    public:
        SinglyLL();
        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPosition(T No,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);
        void Display();
        int CountNodes(){
            return Count;
        }
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    First=NULL;
    Count=0;    
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct SNode<T> *newn=NULL;
    newn= new struct SNode<T>;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
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

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct SNode<T> *newn=NULL;
    newn= new struct SNode<T>;
    struct SNode<T> *temp=First;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
    Count++;
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct SNode<T> *temp=First;

    if(First==NULL)
    {
        return;
    }   
    else if((First->next)==NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        First=First->next;
        delete temp;
    }
    Count--;
}
template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct SNode<T> *temp=First;
    struct SNode<T> *TargetNode=NULL;
    if(First==NULL)
    {
        return;
    }   
    else if((First->next)==NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        TargetNode=temp->next;
        temp->next=temp->next->next;
        delete TargetNode;
    }
    Count--;
}


template<class T>
void SinglyLL<T>:: Display()
{
    struct SNode<T> * temp=First;
    while(temp!=NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp=temp->next;
    }
    cout<<"NULL\n";
}


template <class T>
void SinglyLL<T>::InsertAtPosition(T No,int iPos)
{
    int iCnt=0;
    struct SNode<T> *newn=NULL;
    struct SNode<T> *temp=First;

    if(iPos<1 || iPos>Count+1)
    {
        cout<<"INVALID POSITION"<<endl;
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
        newn=new struct SNode<T>;
        newn->data=No;
        newn->next=NULL;
        
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

        Count++;
    }
}

template <class T>
void SinglyLL<T>::DeleteAtPosition(int iPos)
{
    int iCnt=0;
    struct SNode<T> *temp=First;
    struct SNode<T> *TargetedNode=NULL;

    if(iPos<1 || iPos>Count)
    {
        cout<<"INVALID POSITION"<<endl;
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
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        TargetedNode=temp->next;
        temp->next=temp->next->next;
        delete TargetedNode;

        Count--;
    }

}

//--------------------------------------------------------------------------------------------------------------------------//
//SinglyCL
template<class T>
class SinglyCL
{
    private:
        struct SNode<T> *First;
        struct SNode<T> *Last;
        int Count;
    public:
        SinglyCL();
        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPosition(T No,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);
        void Display();
        int CountNodes(){
            return Count;
        }
};

template<class T>
SinglyCL<T>::SinglyCL()
{
    cout<<"Inside Constructor"<<endl;
    First=NULL;
    Last=NULL;
    Count=0;
}

template<class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct SNode<T> *newn=NULL;
    newn=new struct SNode<T> ;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;
        Last=newn;
    }
    else
    {
        newn->next=First;
        First=newn;
    }
    Last->next=First;
    Count++;
}

template<class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct SNode<T> *newn=NULL;
    newn=new struct SNode<T> ;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;
        Last=newn;
    }
    else
    {
        Last->next=newn;
        Last=newn;
    }
    Last->next=First;
    Count++;
}

template<class T>
void SinglyCL<T>::DeleteFirst()
{
    if(First==NULL && Last==NULL)
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete Last->next;

        Last->next=First;
    }
    Count--;
}

template<class T>
void SinglyCL<T>::DeleteLast()
{
    struct SNode<T> *temp=First;
    if(First==NULL && Last==NULL)
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        while(temp->next!=Last)
        {
            temp=temp->next;
        }
        Last=temp;

        delete Last->next;

        Last->next=First;
    }
    Count--;
}
template<class T>
void SinglyCL<T>::Display()
{
    struct SNode<T> *temp=First;
    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp=temp->next;

    }while(temp->next!=First);
    cout<<"Address of 1st Node"<<endl;
}

template<class T>
void SinglyCL<T>::InsertAtPosition(T No,int iPos)
{
    int iSize=CountNodes();
    int iCnt=0;
    if(iPos<1 || iPos>iSize+1)
    {
        cout<<"Invalid position";
        return;
    }

    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if(iPos==iSize)
    {
        InsertLast(No);
    }
    else
    {
        struct SNode<T> *newn=NULL;
        newn =new struct SNode<T>;
        newn->data=No;
        newn->next=NULL;

        struct SNode<T> *temp=First;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        Count++;
    }
    
}

template<class T>
void SinglyCL<T>::DeleteAtPosition(int iPos)
{
    int iSize=CountNodes();
    int iCnt=0;
    if(iPos<1 || iPos>iSize)
    {
        cout<<"Invalid position";
        return;
    }

    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==iSize)
    {
        DeleteLast();
    }
    else
    {
        struct SNode<T> *target=NULL;
        struct SNode<T> *temp=First;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        target=temp->next;
        temp->next=temp->next->next;

        delete target;
        Count--;        

    }
}

//--------------------------------------------------------------------------------------------------------------------------//

template<class T>
class DoublyLL
{
    private:
        struct DNode<T> *First;
        int Count;
    public:
        DoublyLL();
        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPosition(T No,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);
        void Display();
        int CountNodes()
        {
            return Count;
        }
};

template<class T>
DoublyLL<T>::DoublyLL()
{
    cout<<"Inside Constructor"<<endl;
    First=NULL;
    Count=0;

}

template<class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct DNode<T> *newn=new struct DNode<T>;
    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        newn->next=First;
        First->prev=newn;
        First=newn;  //First=First->prev
    }
    Count++;
}
template<class T>
void DoublyLL<T>::InsertLast(T No)
{
    struct DNode<T> *temp=First;
    struct DNode<T> *newn=new struct DNode<T>;
    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
        
    }
    Count++;
}
template<class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First==NULL)
    {
        return;
    }
    else if((First->next)==NULL && ((First->prev)==NULL))
    {
        delete First;
    }
    else
    {
        First=First->next;
        delete First->prev;
        First->prev=NULL;
    }
    Count--;
}
template<class T>
void DoublyLL<T>::DeleteLast()
{
    struct DNode<T> *temp=First;
    if(First==NULL)
    {
        return;
    }
    else if(((First->next)==NULL) && ((First->prev)==NULL))
    {
        delete First;
    }
    else
    {
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
void DoublyLL<T>::Display()
{
    struct DNode<T> *temp=First;
    cout<<"NULL <=>";
    while(temp!=NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
template<class T>
void DoublyLL<T>::InsertAtPosition(T No,int iPos)
{
    int iCnt=0;
    struct DNode<T> *temp=First;
    struct DNode<T> *newn=NULL;
    if(iPos<1 || iPos>Count+1)
    {
        cout<<"Invalid POSITION"<<endl;
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
        newn=new struct DNode<T>;
        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;

        temp->next=newn;
        newn->prev=temp;

        Count++;
    }
}
template<class T>
void DoublyLL<T>::DeleteAtPosition(int iPos)
{
    int iCnt=0;
    struct DNode<T> *temp=First;
    if(iPos<1 || iPos>Count)
    {
        cout<<"INVALID POSITION"<<endl;
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
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;

        Count--;
    }
}
//--------------------------------------------------------------------------------------------------------------------------//

template<class T>
class DoublyCL
{
    private:
        struct DNode<T>* First;
        struct DNode<T> *Last;
        int Count;
    public:
        DoublyCL();
        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPosition(T No,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);
        void Display();
        int CountNodes()
        {
            return Count;
        }
};

template<class T>
DoublyCL<T>::DoublyCL()
{
    cout<<"Inside constructor"<<endl;
    First=NULL;
    Last=NULL;
    Count=0;
}
template<class T>
void DoublyCL<T>::InsertFirst(T No)
{
    struct DNode<T> *newn=NULL;
    newn=new struct DNode<T>;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;


    if((First==NULL) && (Last==NULL))
    {
        First=newn;
        Last=newn;
        
    }
    else
    {
        newn->next=First;
        First->prev=newn;
        First=newn;
    }
    Last->next=First;
    First->prev=Last;
    Count++;
}
template<class T>
void DoublyCL<T>::InsertLast(T No)
{
    struct DNode<T> *newn=new struct DNode<T>;
    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((First==NULL) && (Last==NULL))
    {
        First=newn;
        Last=newn;
    }
    else
    {
        Last->next=newn;
        newn->prev=Last;
        Last=newn;  //Last=Last->next
    }
    Last->next=First;
    First->prev=Last;
    Count++;
}
template<class T>
void DoublyCL<T>::DeleteFirst()
{
    if((First==NULL) && (Last==NULL))
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First->prev=NULL;
        Last->next=NULL;
    }
    else
    {
        First=First->next;
        delete First->prev;
    }
    First->prev=Last;
    Last->next=First;
    Count--;
}

template<class T>
void DoublyCL<T>::DeleteLast()
{
    if((First==NULL) && (Last==NULL))
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First->prev=NULL;
        Last->next=NULL;
    }
    else
    {
        Last=Last->prev;
        delete Last->next;
    }
    Last->next=First;
    First->prev=Last;
    Count--;
}

template<class T>
void DoublyCL<T>::Display()
{
    struct DNode<T> *temp=First;
    cout<<"Address of Last Node <=> ";
    do{
        cout<<"| "<<temp->data<<" | <=> ";
        temp=temp->next;
    }while(temp!=First);

    cout<<"Address of First Node "<<endl;
}

template<class T>
void DoublyCL<T>::InsertAtPosition(T No,int iPos)
{
    struct DNode<T> *temp=First;
    struct DNode<T> *newn=NULL;
    int iCnt=0;
    if(iPos<1 || iPos>Count+1)
    {
        cout<<"INVALID POSITION "<<endl;
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
        newn=new struct DNode<T>;
        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;

        temp->next=newn;
        newn->prev=temp;
        Count++;
        
    }

}
template<class T>
void DoublyCL<T>::DeleteAtPosition(int iPos)
{
    struct DNode<T> *temp=First;
    int iCnt=0;
    if(iPos<1 || iPos>Count)
    {
        cout<<"INVALID POSITION "<<endl;
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
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        Count--;
    }


}

//--------------------------------------------------------------------------------------------------------------------------//

int main()
{
    cout<<"---------------------------------SINGLY LINEAR LINKED LIST---------------------------------"<<endl;
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
    cout<<endl<<endl<<endl;
//----------------------------------------------------------------------------------------------------------------------------//
    cout<<"---------------------------------SINGLY CIRCULAR LINKED LIST---------------------------------"<<endl;
    SinglyCL<float> obj1;
    
    obj1.InsertFirst(111.5);
    obj1.InsertFirst(101.5);
    obj1.InsertFirst(51.5);
    obj1.InsertFirst(21.5);
    obj1.InsertFirst(11.5);
    obj1.Display();

    obj1.InsertLast(121.5);
    obj1.InsertLast(151.5);
    obj1.InsertLast(171.5);
    obj1.Display();

    obj1.DeleteFirst();
    obj1.Display();
    
    obj1.DeleteLast();
    obj1.Display();

    obj1.InsertAtPosition(105.5,5);
    obj1.Display();

    obj1.DeleteAtPosition(5);
    obj1.Display();

    iRet=obj1.CountNodes();

    cout<<"\nNUmber of elements in the linked list are "<<iRet<<" \n"; 

    cout<<endl<<endl<<endl;

//----------------------------------------------------------------------------------------------------------------------------//
    cout<<"---------------------------------DOUBLY LINEAR LINKED LIST---------------------------------"<<endl;
    DoublyLL<char> obj2;

    obj2.InsertFirst('e');
    obj2.InsertFirst('d');
    obj2.InsertFirst('c');
    obj2.InsertFirst('b');
    obj2.InsertFirst('a');
    obj2.Display();

    obj2.InsertLast('f');
    obj2.InsertLast('g');
    obj2.InsertLast('h');
    obj2.Display();

    obj2.DeleteFirst();
    obj2.Display();
    
    obj2.DeleteLast();
    obj2.Display();

    obj2.InsertAtPosition('q',5);
    obj2.Display();

    obj2.DeleteAtPosition(5);
    obj2.Display();

    iRet=obj2.CountNodes();

    cout<<"\nNUmber of elements in the linked list are "<<iRet<<" \n"; 

    cout<<endl<<endl<<endl;

//----------------------------------------------------------------------------------------------------------------------------//
    cout<<"---------------------------------DOUBLY CIRCULAR LINKED LIST---------------------------------"<<endl;
    DoublyCL<double> obj3;

    
    obj3.InsertFirst(111.445);
    obj3.InsertFirst(101.445);
    obj3.InsertFirst(51.445);
    obj3.InsertFirst(21.445);
    obj3.InsertFirst(11.445);
    obj3.Display();

    obj3.InsertLast(121.445);
    obj3.InsertLast(151.445);
    obj3.InsertLast(171.445);
    obj3.Display();

    obj3.DeleteFirst();
    obj3.Display();
    
    obj3.DeleteLast();
    obj3.Display();

    obj3.InsertAtPosition(105.445,5);
    obj3.Display();

    obj3.DeleteAtPosition(5);
    obj3.Display();

    iRet=obj3.CountNodes();

    cout<<"\nNUmber of elements in the linked list are "<<iRet<<" \n"; 

    cout<<endl<<endl<<endl;

//----------------------------------------------------------------------------------------------------------------------------//

    return 0;
}