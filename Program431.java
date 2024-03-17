//Customised Database Management System

class Program426
{
    public static void main(String arg[])
    {
        DBMS obj=new DBMS();
        obj.InsertIntoTable("Amit","Pune",89);
        obj.InsertIntoTable("Pooja","Mumbai",95);
        obj.InsertIntoTable("Gauri","Pune",90);
        obj.InsertIntoTable("Amit","Nagar",81);
        obj.InsertIntoTable("Rahul","Satara",80);
        obj.InsertIntoTable("Neha","Pune",78);
       

        obj.SelectStarFrom();

        obj.SelectStarFromWhereCity("Pune");

        obj.SelectCount();

        obj.SelectSum();
        obj.SelectAvg();
        obj.SelectMax();
        obj.SelectMin();

        obj.SelectStarFromName("Amit");

        obj.UpdateCity(2,"Nashik");

        obj.SelectStarFrom();

        obj.DeleteFrom(5);

        obj.SelectStarFrom();

        obj.InsertIntoTable("Rukmini","Kolhapur",77);  //Ata insert kelya nantar tila latest chya pudchya roll no milnar
        
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

   // select * from student where City = '----';
    public void SelectStarFromWhereCity(String str)
    {
        System.out.println("Data from the student table where City is: "+str);

        Node temp=first;

        System.out.println("-----------------------------------------------------------------");
        while(temp!=null)
        {
            if(str.equals(temp.City))
            {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            
            temp=temp.next;
        }
        System.out.println("-----------------------------------------------------------------");
    }

    //select Count(Marks) from student;
    public void SelectCount()
    {
        Node temp=first;

        int iCnt=0;

        while(temp!=null)
        {
            iCnt++;
            temp=temp.next;
        }

        System.out.println("Number of records in the table: "+iCnt);
    }

    //select Sum(Marks) from student;
    public void SelectSum()
    {
        Node temp=first;

        int iSum=0;
        
        while(temp!=null)
        {
            iSum=iSum+temp.Marks;
            temp=temp.next;
        }

        System.out.println("Summation of marks column is: "+iSum);
    }

    //select Avg(Marks) from student;
    public void SelectAvg()
    {
        Node temp=first;
        int iCnt=0;
        int iSum=0;

        while(temp!=null)
        {
            iSum=iSum+temp.Marks;
            temp=temp.next;
            iCnt++;
        }

        System.out.println("Average of marks column is: "+(float)((float)iSum/(float)iCnt));
    }

    //select Max(Marks) from student;
    public void SelectMax()
    {
        Node temp=first;
        int iMax=0;
        if(temp!=null)
        {
            iMax=temp.Marks;    
        }
        while(temp!=null)
        {
            if(temp.Marks>iMax)
            {
                iMax=temp.Marks;
            }
            temp=temp.next;
            
        }

        System.out.println("max of marks column is: "+iMax);
    }

    //select Max(Marks) from student;
    public void SelectMin()
    {
        Node temp=first;
        int iMin=0;
        if(temp!=null)
        {
            iMin=temp.Marks;    
        }
        while(temp!=null)
        {
            if(temp.Marks<iMin)
            {
                iMin=temp.Marks;
            }
            temp=temp.next;
            
        }

        System.out.println("Min of marks column is: "+iMin);
    }

    // select * from student where Name = '----';
    public void SelectStarFromName(String str)
    {
        System.out.println("Data from the student table where Name is: "+str);

        Node temp=first;

        System.out.println("-----------------------------------------------------------------");
        while(temp!=null)
        {
            if(str.equals(temp.Name))
            {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            
            temp=temp.next;
        }
        System.out.println("-----------------------------------------------------------------");
    }
    //update student set City ="_____" where Rno=___;
    public void UpdateCity(int no,String str)
    {
        Node temp=first;

        while(temp!=null)
        {
            if(no==temp.Rno)
            {
                temp.City=str;
                break;
            }
            temp=temp.next;
        }

        System.out.println("Record gets updated...");

    }

    public void DeleteFrom(int no)
    {
        Node temp=first;


        //If LL is empty
        if(first==null)
        {
            return;
        }

        //if first Node is the targeted node
        if(temp.Rno==no)
        {
            first=first.next;
        }
       
        
            while(temp.next!=null)
            {
                if(temp.next.Rno==no)
                {
                    temp.next=temp.next.next;
                    break;
                }
                temp=temp.next;
            }
        
    }

       
}



/*
Supported Queries

1: Insert into Student Values('Amit','Pune',78);
2: select *from student ;
3: select * from student where City = 'Pune';
4: select count(Marks) from student;    //aggregate function
5: select Sum(Marks) from student;  //aggregate function
6: select Avg(Marks) from student;  //aggregate function
7: select Max(Marks) from student;  //aggregate function
8: select Min(Marks) from student;  //aggregate function
9: select * from student where Name = '----';
10: update student set City ="_____" where Rno=___;
11. delete from student where Rno ="____";
 */