/*Program to accept a  number from user and return Multiplication of 
digits  that Number */
import java.util.*;

class Program169
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0,iRet=0;
        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        Digit dobj=new Digit();
        iRet=dobj.CountRange(iValue);

        System.out.println(iRet);
    }
}
class Digit
{
    public int iDigit=0,iMult=1;
    public int CountRange(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            if(iDigit==0)
            {
                iDigit=1;
            }
            iMult=iMult*iDigit;
        }
        return iMult;
    }
}