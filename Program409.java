//Singly Linked List 

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
    public void InsertFirst(int no){}
    public void InsertLast(int no){}
    public void InsertAtPosition(int no,int iPos){}
    public void DeleteFirst(){}
    public void DeleteLast(){}
    public void DeleteAtPosition(int iPos){}
    public void Display(){}
    public int Count(){return Count;}
}

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