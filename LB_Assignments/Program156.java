//Accept String from user and count number of Capital letters
import java.util.*;

class Program156
{
    public static int CountCapital(String str)
    {
        int iCnt=0,iCount=0;
        char Arr[]=str.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
            {
                iCount++;
            }
        }
        return iCount;
    
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iRet=0;
        String str=null;

        System.out.println("Enter a string: ");
        str=sobj.nextLine();

        iRet=CountCapital(str);

        System.out.println("Capital Letter are: "+iRet);
    }
}

