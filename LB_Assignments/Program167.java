/*Program to accept a  number from user and return Count of 
Odd digits in that Number */
import java.util.*;

class Program167
{
    public static int CountOdd(int iNo)
    {
        int iDigit=0,iCnt=0;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            if((iDigit%2)!=0)
            {
                iCnt++;
            }
        }
        return iCnt;

    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0,iRet=0;
        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        
        iRet=CountOdd(iValue);

        System.out.println(iRet);
    }
}
