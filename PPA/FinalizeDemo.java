class FinalizeDemo
{
    public static void main(String arg[])
    {
        Employee eobj=new Employee("Amit",78000,28,"Karve Road Pune");

        eobj.Display();
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

    void Display()
    {
        System.out.println("Employee Name: "+this.name);
        System.out.println("Employee Age: "+this.Age);
        System.out.println("Employee salary:  "+this.salary);
        System.out.println("Employee Address:  "+this.Address);

    }
}

