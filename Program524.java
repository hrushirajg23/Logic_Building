//reverse string using inbuilt function
import java.util.*;

class Program507
{
    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter a string ");
        String str=sobj.nextLine();
        
        StringBuffer sbobj= new StringBuffer(str);

        sbobj=sbobj.reverse();

        //str=str.reverse();      //can't reverse karan string is immuatble , so we use buffer

        System.out.println("Updated string is: "+sbobj);
    }
}