class abstractDemo1
{
    public static void main(String arg[])
    {
        System.out.println("Inside main");
        //Hello hobj=new Hello(); //also can be used
        Demo dobj=new Hello();  //UPCASTING
        //Demo dobj=new Demo(); //Not Allowed
        dobj.fun(); //hello fun
        dobj.gun(); //Demo gun
    }
}

abstract class Demo
{
    public int A,B;
    public Demo()
    {
        System.out.println("Inside Demo constructor");
        this.A=0;
        this.B=0;

    }
    public abstract void fun();
    //In c++ : virtual void  fun()=0;

    public void gun()              //concrete
    {
        System.out.println("Inside Demo gun");
    }
}

class Hello extends Demo
{
    public Hello()
    {
        System.out.println("Inside hello constructor");
    }
    public void fun()
    {
        System.out.println("Inside hello fun");

    }
}