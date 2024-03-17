//18th bit chalu asel tar band karaycha
import java.util.*;

class Program277
{
    public static int OffBit(int iNo)
    {
        int iMask=0X00020000;
        int iResult=0;
        iResult=iNo & iMask;
        if(iResult == iMask)  //18th bit is on
        {
            return (iNo^iMask); //chalu asel bit tar band kar
        }
        else                //18th bit is off
        {
            return iNo;
        }

    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0;
        int iRet=0;
        
        
        System.out.println("Enter Number: ");
        iNo=sobj.nextInt();

        iRet=OffBit(iNo);

        System.out.println("Updated Number is :"+iRet);

        

    }
}