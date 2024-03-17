//Singly Linked List 

class Program407
{
    public static void main(String arg[])
    {
        SinglyLL obj=new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
    }
}
class Node
{
    public int data;
    public Node next;

    public Node(int No)   //jevha jevha Node navacha object tayar hoil ha constructor call hoil
    {
        data=No;
        next=null;
    }
    
}

class SinglyLL
{
    private Node first;  //first reference ahe   
    private int Count;

    public SinglyLL()
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
            first=newn;
        }
        Count++;
    }
    public void InsertLast(int no){}
    public void InsertAtPosition(int no,int iPos){}
    public void DeleteFirst(){}
    public void DeleteLast(){}
    public void DeleteAtPosition(int iPos){}
    public void Display(){}
    
    public int Count()
    {
        return Count;
    }
}

