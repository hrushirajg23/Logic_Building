import java.io.*;   //for buffered reader class

class Program239
{
    public static void main(String arg[]) 
    {
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        int iNo1=0;
        int iNo2=0;

        int iAns=0;

        try
        {
            System.out.println("Enter first NUmber");
            iNo1=Integer.parseInt(bobj.readLine());
            System.out.println("Enter second NUmber");
            iNo2=Integer.parseInt(bobj.readLine());
            iAns=iNo1+iNo2;

            System.out.println("Addition is "+iAns);
            bobj.close();   //if we get warnings


        }

        catch(Exception eobj)
        {
            System.out.println("Exception Occured");
        }
        

        
    }
}