//Accept Number and position from user and check whether bit at that position is on or off. If 1 return TRUE otherwise FALSE
import java.util.*;

class Program189
{
    public static boolean CheckBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask=iMask<<(iPos-1);
        iResult=iNo&iMask;

        if(iResult==iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0,iPos=0;
        boolean bRet=false;

        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        System.out.println("Enter the position: ");
        iPos=sobj.nextInt();

       bRet=CheckBit(iValue,iPos);

        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}