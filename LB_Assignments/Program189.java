//Accept Number from user and toggle 7th and 10th bit of that Number, return Modified Number
import java.util.*;

class Program189
{
    public static int ToggleBit(int iNo)
    {
        int iMask=0X00000240;
        int iResult=0;

        iResult=iNo^iMask;

        return iResult;
        
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0,iRet=0;

        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        iRet=ToggleBit(iValue);

        System.out.println(iRet);
    }
}