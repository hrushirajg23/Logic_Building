//Accept Number and position from user and toggle that bit
import java.util.*;

class Program192
{
    public static int ToggleBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask=iMask<<(iPos-1);
        iResult=iNo^iMask;
        

        return iResult;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0,iPos=0;
        int iRet=0;

        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        System.out.println("Enter the position: ");
        iPos=sobj.nextInt();

       iRet=ToggleBit(iValue,iPos);

        System.out.println(iRet);
    }
}