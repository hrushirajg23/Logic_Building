//c++ madhe Demo obj manalo ki object tayar hota
//but in java to create a Demo obj=new Demo() lihava lagta
//So java madhe nusta Demo obj lihila tar it is a reference to Demo object 


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
}

class Program407
{
    public static void main(String arg[])
    {
        SinglyLL obj=new SinglyLL();
    }
}