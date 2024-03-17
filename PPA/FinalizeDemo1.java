class FinalizeDemo1
{
    public static void main(String arg[])
    {
        Employee eobj=new Employee("Amit",78000,28,"Karve Road Pune");

        Employee eobj2=eobj;
        Employee eobj3=new Employee("Saagr",90000,20,"Prabhat rod mumbai");

        eobj.Display();
        System.out.println("Hash code of eobj is: "+eobj.hashCode());
        System.out.println("Hash code of eobj is: "+eobj2.hashCode());
        System.out.println("Hash code of eobj is: "+eobj3.hashCode());
        eobj=null;
        System.gc();
    }
}

class Employee
{
    public String name;
    public int salary;
    public int Age;
    public String Address;

    Employee(String str,int amount,int A,String addr)
    {
        this.name=str;
        this.salary=amount;
        this.Age=A;
        this.Address=addr;
    }

    protected void finalize()
    {
        System.out.println("Inside finalize method...");
    }
    void Display()
    {
        System.out.println("Employee Name: "+this.name);
        System.out.println("Employee Age: "+this.Age);
        System.out.println("Employee salary:  "+this.salary);
        System.out.println("Employee Address:  "+this.Address);

    }
}

