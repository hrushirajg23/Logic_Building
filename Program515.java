//using split() method in java
import java.util.*;

class Program507
{
    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter a string ");
        String str=sobj.nextLine();
        
        str=str.trim();

        str=str.replaceAll("\\s+"," ");

        String Arr[]=str.split(" ");


        for(String s:Arr)  //for each loop
        {
            System.out.println(s);
        }
    }
}