/*Write a program which accepts two numbers from user and display 
position of common ON bits from that two Numbers */

import java.util.*;

class Program197
{
    
    public static void CommonBits(int iNo1,int iNo2)
    {
        int iMask=0X00000001;
        int iResult1=0,iResult2=0;
        int iPos=1;
        while(iNo1!=0)
        {
            iResult1=iNo1&iMask;
            iResult2=iNo2&iMask;

            if(iResult1==iMask && iResult2==iMask)
            {
                System.out.println(iPos+"\t");
            }
            iNo1=iNo1>>1;
            iNo2=iNo2>>1;
            iPos++;

        }

    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iValue1=0,iValue2=0,iRet=0;

        System.out.println("Enter 1st number: ");
        iValue1=sobj.nextInt();

        System.out.println("Enter 2nd number: ");
        iValue2=sobj.nextInt();

        CommonBits(iValue1,iValue2);

    }
}


