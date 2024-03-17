/*
Write a program which accept one number from user ,range of positions from user
and toggle all bits in that range*/
import java.util.*;

class Program200
{
    public static int ToggleBitRange(int iNo,int iStart,int iEnd)
    {
        
        int iRange=0;
        iRange=(iEnd-iStart+1);
        int iResult=0;
        int iCnt=0;
        int iMask1=0X00000001;
        int iMask2=0X00000001;

        iMask1=iMask1<<(iStart-1);
        iMask2=iMask2<<(iStart-1);

        for(iCnt=1;iCnt<=iRange;iCnt++)
        {
            iMask1=iMask1|iMask2;
            iMask2=iMask2<<1;
        }

        iResult=iNo^iMask1;

        return iResult;

    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);    

        int iValue=0,iPosition1=0,iPosition2=0;
        int iRet=0;
        System.out.println("Enter a number :");
        iValue=sobj.nextInt();

        System.out.println("Enter start range  :");
        iPosition1=sobj.nextInt();

        System.out.println("Enter end of range :");
        iPosition2=sobj.nextInt();
        
        iRet=ToggleBitRange(iValue,iPosition1,iPosition2);

        System.out.println("The modified number is: "+iRet);
    }
}

