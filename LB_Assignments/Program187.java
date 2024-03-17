/*Write a program which accepts a number from User and 
off 7th bit and 10th of that number if it is on. Return Modified NUmber*/

import java.util.*;

class Program187
{
    public static int OffBit(int iNo)
    {
        int iMask=0X00000240;
        int iResult=0;

        iResult=iNo&iMask;

        if(iResult==iMask) //7th bit is on
        {
            return (iNo^iMask);   //bit chalu asel tar band kela
        }
        else
        {
            return iNo;
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRet=0;
        int iNo=0;
        System.out.println("Enter a number:  ");
        iNo=sobj.nextInt();

        iRet=OffBit(iNo);

        System.out.println("Modified Number is: "+iRet);
    }
}