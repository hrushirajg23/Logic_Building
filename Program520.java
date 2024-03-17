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
        int iMax=0;

        String MaxStr="";
        for(int i=0;i<Arr.length;i++)  
        {
            if(Arr[i].length()>=iMax)
            {
                iMax=Arr[i].length;
                MaxStr=Arr[i];
            }
        }
        System.out.println("Largest word is"+MaxStr+" having length: "+MaxStr.length());
    }
}