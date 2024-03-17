//Accept Number from user and on its first four bits
import java.util.*;

class Program190
{
    public static int ToggleBit(int iNo)
    {
        int iMask=0X0000000F;
        int iResult=0;

        iResult=iNo|iMask;

        return iResult;
        
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0,iRet=0;

        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        iRet=ToggleBit(iValue);

        System.out.println(iRet);
    }
}