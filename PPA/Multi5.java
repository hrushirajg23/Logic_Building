
class Multi3
{
    public static void main(String arg[])throws Exception
    {
        System.out.println("Current thread is :"+Thread.currentThread().getName());
        Demo obj1=new Demo();  //New state 

        obj1.start();        //Runnable state
        obj1.join();
        System.out.println("End of main thread");
    }
}

class Demo extends Thread
{
    public void run()   //Running state
    {
        for(int i=1;i<10;i++)
        {
            try
            {
                System.out.println("Value of i is: "+i);
                Thread.sleep(10000);  //or Demo.sleep(10000) as Demo inherits characteristics and behaviours of Thread
            }
            catch(Exception obj)
            {}
        }
        
    }
}