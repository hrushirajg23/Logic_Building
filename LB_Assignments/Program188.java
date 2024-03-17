/*Write a program which accepts a number from User and 
toggle 7th bit  of that number if it is on. Return Modified NUmber*/

import java.util.*;

class Program187
{
    public static int ToggleBit(int iNo)
    {
        int iMask=0X00000040;
        int iResult=0;

        iResult=iNo^iMask;
        return iResult;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRet=0;
        int iNo=0;
        System.out.println("Enter a number:  ");
        iNo=sobj.nextInt();

        iRet=ToggleBit(iNo);

        System.out.println("Modified Number is: "+iRet);
    }
}