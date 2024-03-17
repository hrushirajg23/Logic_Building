//Check Bit at position if it is ON or OFF

//Dynamic Mask
import java.util.*;

class Program281
{
    public static boolean CheckBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask=iMask<<(iPos-1);
        iResult=iNo&iMask;

        System.out.println("Result at postion is: "+iResult);
        
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
        int iNo=0;
        boolean bRet=false;
        int iPos=0;
        
        System.out.println("Enter Number: ");
        iNo=sobj.nextInt();

        System.out.println("Enter the Position ");
        iPos=sobj.nextInt();
        
        bRet=CheckBit(iNo,iPos);

        if(bRet==true)
        {
            System.out.println("Bit is ON at given Position...");
        }   
        else
        {
            System.out.println("Bit is OFF at given Position...");
        }     

    }
}