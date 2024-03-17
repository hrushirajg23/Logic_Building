/*
Write a program which accept one number from user and check whether 
9th or 12th bit is on or off

*/
import java.util.*;

class Program198
{
    public static boolean CheckBits(int iNo)
    {

        int iMask1=0X00000100;
        int iMask2=0X00000800;

        int iResult1=iNo&iMask1;
        int iResult2=iNo&iMask2;

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

        int iValue=0;
        boolean bRet=false;
        System.out.println("Enter a number :");
        iValue=sobj.nextInt();

        
        bRet=CheckBits(iValue);

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

