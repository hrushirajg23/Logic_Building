//calculating frequency of a word
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

        String Arr[]=str.split(" ");
        

        int iFrequency=0;
        for(int i=0;i<Arr.length;i++)  
        {
            if(word.equals(Arr[i]))
            {
                iFrequency++;
            }
        }
        System.out.println("Frequency of the word is : "+iFrequency);
    }
}