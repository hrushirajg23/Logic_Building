class Overriding
{
    public static void main(String arg[])
    {
        Base bobj= new Derived();   //UPCASTING

        //Base bobj= new Base();   //NOCASTING
        //Derived dobj=new Derived();   //NOCASTING
        //Derived dobj=new Base();   //Downcasting //Notallowed


        bobj.fun();     //Derived fun
        bobj.gun();     //Base gun
        bobj.sun();     //Derived Sun
        bobj.run();    //Base run
        //bobj.run(11);       //error because Base madhe run function la parameter nahie
        //bobj.mun();    //error
    }
}

class Base
{
    public void fun()       //1000
    {
        System.out.println("Inside Base fun");
    }
    public void gun()       //2000
    {
        System.out.println("Inside Base gun");
    }
    public void sun()       //3000
    {
        System.out.println("Inside Base sun");
    }
    public void run()       //4000
    {
        System.out.println("Inside Base run");
    }
}

class Derived extends Base
{
    public void fun()       //5000
    {
        System.out.println("Inside Derived fun");
    }
    public void sun()       //6000
    {
        System.out.println("Inside Derived sun");
    }
    public void run(int A)      //7000
    {
        System.out.println("Inside Derived run with one parameter");
    }
    public void mun()       //8000
    {
        System.out.println("Inside Derived mun");
    }

}