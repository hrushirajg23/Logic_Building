/*
Write a program which accept one number from user ,two positions
from user and check whther bit at first or bit at second position is ON or OFF
*/
import java.util.*;

class Program199
{
    public static boolean CheckBits(int iNo,int iPos1,int iPos2)
    {
        int iResult1=0,iResult2=0;
        int iMask1=0X00000001;
        int iMask2=0X00000001;

        iMask1=iMask1<<(iPos1-1);

        iMask2=iMask2<<(iPos2-1);

        iResult1=iNo&iMask1;
        iResult2=iNo&iMask2;

        if(iResult1==iMask1 || iResult2==iMask2)
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

        int iValue=0,iPosition1=0,iPosition2=0;
        boolean bRet=false;
        System.out.println("Enter 1st number :");
        iValue=sobj.nextInt();

        System.out.println("Enter 1st position to check :");
        iPosition1=sobj.nextInt();

        System.out.println("Enter 2nd position to check :");
        iPosition2=sobj.nextInt();
        
        bRet=CheckBits(iValue,iPosition1,iPosition2);

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

