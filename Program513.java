//removes extra spaces
import java.util.*;

class Program507
{
    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter a string ");
        String str=sobj.nextLine();
        str=str.trim();    //start and last che spaces are trimmed //not between words

        str=str.replaceAll("\\s+"," ");  //replace multiple spaces with single space

        System.out.println("Updated string is : "+str);

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