/*Program to accept a  number from user and return Count of 
even digits in that Number */
import java.util.*;

class Program166
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0,iRet=0;
        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        Digit dobj=new Digit();
        iRet=dobj.CountEven(iValue);

        System.out.println(iRet);
    }
}
class Digit
{
    public int iDigit=0,iCnt=0;
    public int CountEven(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            if(iDigit%2==0)
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}