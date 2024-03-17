//Accept String from user and count number of small characters
import java.util.*;

class Program157
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iRet=0;
        String str=null;
        System.out.println("Enter a string : ");
        str=sobj.nextLine();

        StringDemo dobj=new StringDemo(str);
        iRet=dobj.CountSmall();

        System.out.println("Small characters is the string are: "+iRet);

    }
}

class StringDemo
{
    public String str;
    public int iCount;
    public StringDemo(String x)
    {
        this.str=x;
        
    }

    public int CountSmall()
    {
        char Arr[]=str.toCharArray();
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]>='a' && Arr[iCnt]<='z')
            {
                iCount++;
            }
        }
        return iCount;

    }

}