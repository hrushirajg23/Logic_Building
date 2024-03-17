
import java.util.*;

class Program507
{
    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter a string ");
        String str=sobj.nextLine();
        str=str.trim();

        str=str.replaceAll("\\s","");  //replaces multiple spaces wtih nothing

        System.out.println("Updated string is : "+str);
    }
}