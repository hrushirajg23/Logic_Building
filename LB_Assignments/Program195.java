/*Accept Number from user and toggle contents of first and last nibble of that  number  
.Return the modfied NUmber  (1 Nibble = 4bits , 1 Integer=32bits)
*/
import java.util.*;

class Program195
{
    public static int ToggleBit(int iNo)
    {
        int iMask=0XF000000F;
        int iResult=0;

        
        iResult=iNo^iMask;
        

        return iResult;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0,iPos=0;
        int iRet=0;

        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        System.out.println("Enter the position: ");
        iPos=sobj.nextInt();

       iRet=ToggleBit(iValue);

        System.out.println(iRet);
    }
}