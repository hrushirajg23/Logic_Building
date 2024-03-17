class InterfaceDemoX
{
    public static void main(String arg[])
    {

        
    }
}
//One class can implement multiple interfaces
interface Hello()
{
    void gun();
}

interface Demo()
{
    void fun();
}

class Marvellous implements Demo,Hello
{
    public void fun()
    {}
    public void gun()
    {}
}