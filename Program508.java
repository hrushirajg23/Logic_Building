//take string from user and count he number of words in the string
//correct code trim() method used- which removes extra whitespaces
//pn ma starting ani last chya spaces vadhavle ki code phattoy
import java.util.*;

class Program507
{
    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter a string ");
        String str=sobj.nextLine();
        str=str.trim();

        char Arr[]=str.toCharArray();

        int i=0;

        int SpaceCnt=0;

        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]==' ')
            {
                SpaceCnt++;
            }
        }

        System.out.println("Number of words in the string are: "+(SpaceCnt+1));
    }
}