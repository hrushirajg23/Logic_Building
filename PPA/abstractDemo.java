class abstractDemo
{
    public static void main(String arg[])
    {
        System.out.println("Inside main");
        //Demo obj=new Demo();  //error
    }
}

abstract class Demo
{
    public int A,B;
    public Demo()
    {
        System.out.println("Inside constructor");
        this.A=0;
        this.B=0;

    }
    abstract void fun();
    //In c++ : virtual void  fun()=0;

    void gun()              //concrete
    {
        System.out.println("Inside gun");
    }
}

