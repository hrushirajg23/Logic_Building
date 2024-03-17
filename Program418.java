//Customised Database Management System

class Node
{
    public int Rno;
    public String Name;
    public String City;
    public int Marks;

    Node next;

    public Node(int A,String B,String C,int D)
    {
        Rno=A;
        Name=B;
        City=C;
        Marks=D;
        next=null;
    }
}

class DBMS
{
    private Node first;
    public DBMS()
    {
        first=null;
        System.out.println("DBMS gets Initialised successfully...");
        System.out.println("Student Table gets created successfully...");
    }

    //InsertLast
    public void InsertIntoTable(int Rno,String Name,String City,int Marks)
    {
        Node newn= new Node(Rno,Name,City,Marks);
        Node temp=first;

        if(first==null)
        {
            first=newn;
        }
        else
        {
            while(temp.next!=null)
            {
                temp=temp.next;
            }

            temp.next=newn;
        }

        System.out.println("1 record gets inserted successfully...");
    }
}

class Program418
{
    public static void main(String arg[])
    {
        DBMS obj=new DBMS();
        obj.InsertIntoTable(1,"Amit","Pune",89);
        obj.InsertIntoTable(2,"Pooja","Mumbai",95);
        obj.InsertIntoTable(3,"Rahul","Satara",80);
        obj.InsertIntoTable(4,"Amit","Pune",78);
    }
}
