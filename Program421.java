//Customised Database Management System


class Program419
{
    public static void main(String arg[])
    {
        DBMS obj=new DBMS();
        obj.InsertIntoTable("Amit","Pune",89);
        obj.InsertIntoTable("Pooja","Mumbai",95);
        obj.InsertIntoTable("Rahul","Satara",80);
        obj.InsertIntoTable("Neha","Pune",78);

        obj.SelectStarFrom();
    }
}


class Node
{
    private static int Counter=1;  //ithe counter static kelay karan it is a variable which will be shared by all objects

    public int Rno;
    public String Name;
    public String City;
    public int Marks;

    Node next;

    public Node(String B,String C,int D)
    {
        Rno=Counter;
        Counter++;
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
    //Insert into table Student values(1,'Amit','Pune',89)  
    public void InsertIntoTable(String Name,String City,int Marks)
    {
        Node newn= new Node(Name,City,Marks);
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

    //select *from
    public void SelectStarFrom()
    {
        System.out.println("Data from the student table is: ");

        Node temp=first;

        System.out.println("-----------------------------------------------------------------");
        while(temp!=null)
        {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            temp=temp.next;
        }
        System.out.println("-----------------------------------------------------------------");
    }

    
}

