//Write a program which checks whether 5th and 18th bit is ON or OFF

import java.util.*;

class Program181
{
    public static boolean CheckBit(int iNo)
    {
        int iMask=0X00020010;
        int iResult=0;

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

        boolean bRet=false;
        int iNo=0;
        System.out.println("Enter a number:  ");
        iNo=sobj.nextInt();

        bRet=CheckBit(iNo);

        if(bRet==true)
        {
            System.out.println("bits are ON");
        }
        else
        {
            System.out.println("bits are OFF");
        }

    }
}