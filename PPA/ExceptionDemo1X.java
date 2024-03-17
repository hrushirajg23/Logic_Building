import java.util.*;

class ExceptionDemo1
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("ENter firstnumber: ");
        int iNo1=sobj.nextInt();
        System.out.println("ENter second number: ");
        int iNo2=sobj.nextInt();
        int iAns=0;

        try
        {   
            System.out.println("Inside try block");
            iAns=iNo1/iNo2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside Catch Block" + obj);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Array INdex out of Bounds exception"+obj);
        }
        catch(Exception obj)
        {
            System.out.println("Inside generic catch block"+obj);
        }
        finally
        {
            System.out.println("Inside finally block ");

        }
        System.out.println("Division is"+iAns); 
    }
}