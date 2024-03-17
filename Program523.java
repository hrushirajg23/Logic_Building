//delete a specific word given by user
import java.util.*;

class Program507
{
    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter a string ");
        String str=sobj.nextLine();
        
        System.out.println("Enter the word that you want to search: ");
        String word=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s+"," ");

        word = word.trim();

        str=str.replaceAll(word,"");

            str=str.trim();
         str=str.replaceAll("\\s+"," ");

        System.out.println("Updated string is "+str);
    }
}