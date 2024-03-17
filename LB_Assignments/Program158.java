//"Difference of Frequency between Cacpital & Small characters is the string
import java.util.*;

class Program158
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iRet=0;
        String str=null;
        System.out.println("Enter a string : ");
        str=sobj.nextLine();

        StringDemo dobj=new StringDemo(str);
        iRet=dobj.CountDiff();

        System.out.println("Difference of Frequency between Cacpital & Small characters is the string are: "+iRet);

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

    public int CountDiff()
    {
        int iSmall=0,iCapital=0;
        char Arr[]=str.toCharArray();
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]>='a' && Arr[iCnt]<='z')
            {
                iSmall++;
            }
            if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
            {
                iCapital++;
            }
        }
        return iSmall-iCapital;

    }

}