/*Program to accept a  number from user and return Count of 
digits between 3-7 in that Number */
import java.util.*;

class Program168
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
    public int iDigit=0,iCnt=0;
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
            if(iDigit>3 && iDigit<7)
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}