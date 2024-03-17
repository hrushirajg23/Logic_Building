/*Write a program which accepts one number from user and count number of
ON(1) bits in it without using % and / operator  */

import java.util.*;

class Program196
{
    
    public static int CountOne(int iNo)
    {
        int iResult=0,iCount=0;
        int iMask=0X00000001;    //1st Nibble madhe 1st bit chalu thevycha
        while(iNo!=0)           //Joparyant iNo 00000.. hoat nahi, i.e until tychatle sagle 1 rikame hoat nahit
        {
            iResult=iNo&iMask;  //iNo cha shevatacha bit gets AND with iMask, 
                                //and if iNo is 1 it matches iMask karan AND madhe donhi 1 astil tarach 1 yeta
                                // and if our result matches iMask Count++
            if(iResult==iMask)
            {
                iCount++;
            }
            iNo=iNo>>1;     //right shift bit 
        }
        return iCount;

    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iValue=0,iRet=0;

        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        iRet=CountOne(iValue);

        System.out.println(iRet);

    }
}


