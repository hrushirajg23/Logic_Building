//Doubly Linked List 

class Program417
{
    public static void main(String arg[])
    {
        int iRet=0;
        DoublyLL obj=new DoublyLL();
        iRet=obj.Count();
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        obj.Display();
        iRet=obj.Count();
        System.out.println("Count is : "+iRet);
        obj.InsertLast(101);
        obj.InsertLast(121);
        obj.InsertLast(151);
        obj.Display();
        iRet=obj.Count();
        System.out.println("Count is : "+iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet=obj.Count();
        System.out.println("Count is : "+iRet);
        obj.DeleteLast();
        obj.Display();
        iRet=obj.Count();
        System.out.println("Count is : "+iRet);

        obj.InsertAtPosition(105,3);
        obj.Display();
        iRet=obj.Count();
        System.out.println("Count is : "+iRet);

        obj.DeleteAtPosition(3);
        obj.Display();
        iRet=obj.Count();
        System.out.println("Count is : "+iRet);
        
    }
}
class Node
{
    public int data;
    public Node next;
    public Node prev;  //#

    public Node(int No)   //jevha jevha Node navacha object tayar hoil ha constructor call hoil
    {
        data=No;
        next=null;
        prev=null;   //#
    }
    
}

class DoublyLL
{
    private Node first;  //first reference ahe   
    private int Count;

    public DoublyLL()
    {
        first=null;
        Count=0;
    }
    public void InsertFirst(int no)
    {
        Node newn =new Node(no);  // ma node cha constructor call hoil  which will initialise //newn eka object la refer kartoy 
    
        if(first==null) //LL is empty
        {
            first=newn;  // shikshakacha dokyat pahilya mulachi value
        }
        else
        {
            newn.next=first; 
            first.prev=newn;   //#
            first=newn;
        }
        Count++;
    }
    public void InsertLast(int no)
    {
        
        Node newn =new Node(no);  // ma node cha constructor call hoil  which will initialise //newn eka object la refer kartoy 
        Node temp=first;  //a temporary reference for traversal
        if(first==null) //LL is empty
        {
            first=newn;  // shikshakacha dokyat pahilya mulachi value
        }
        else
        {
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.next=newn;
            newn.prev=temp; //#
        }
        Count++;
    }
    
    public void DeleteFirst()
    {
        if(first==null)  //LL empty
        {
            return;
        }
        else if(first.next==null && first.prev==null)  //LL contains one node
        {
            first=null;
        }
        else                    //LL contains more than one node
        {
            first=first.next;
            first.prev=null;  //#
        }
        Count--;
    }
    public void DeleteLast()
    {
        Node temp=first;
        if(first==null)  //LL empty
        {
            return;
        }
        else if(first.next==null)  //LL contains one node
        {
            first=null;
        }
        else                    //LL contains more than one node
        {
            while(temp.next.next!=null)
            {
                temp=temp.next;
            }
            temp.next=null;
        }
        Count--;
    }
    
    public void Display()
    {
        Node temp=first;  

        System.out.println("Elements of the Linked List are: ");
        System.out.print("null <=> ");
        while(temp!=null)
        {
            System.out.print("| "+temp.data+" | <=> ");
            temp=temp.next;
        }
        System.out.println("null");
    }
    
    public int Count()
    {
        return Count;
    }

    public void InsertAtPosition(int no,int iPos)
    {
        
        int iCnt=0;

        if((iPos<1)|| (iPos>Count+1))
        {
            System.out.println("Invalid position");
            return;
        }
        if(iPos==1)
        {
            InsertFirst(no);
        }
        else if(iPos==Count+1)
        {
            InsertLast(no);
        }
        else
        {
            Node temp=first;
            Node newn=new Node(no);
            for(iCnt=1;iCnt<iPos-1;iCnt++)
            {
                temp=temp.next;
            }
            newn.next=temp.next;
            temp.next.prev=newn;

            temp.next=newn;
            newn.prev=temp;
            Count++;
        }
    }

    public void DeleteAtPosition(int iPos)
    {
        
        int iCnt=0;
        if((iPos<1)|| (iPos>Count))
        {
            System.out.println("Invalid position");
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
            Node temp=first;
            for(iCnt=1;iCnt<iPos-1;iCnt++)
            {
                temp=temp.next;
            }
            temp.next=temp.next.next;
            temp.next.prev=temp;
            Count--;
        }
    }
}


       