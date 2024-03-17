/*Program to accept a  number from user and return difference between 
summation of even and odd digits int that Number */

import java.io.*;

class Program170
{
    public static void main(String arg[])
    {
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));
        int iValue=0,iRet=0;

        try
        {
            System.out.println("Enter the number: ");
            iValue=Integer.parseInt(bobj.readLine());

            Digit dobj=new Digit();
            iRet=dobj.CountDiff(iValue);

            System.out.println(iRet);

            bobj.close();

        }
        catch(IOException obj)
        {
            System.out.println("Exception Occured");
        }
    }
}
class Digit
{
    public int iDigit=0,iDiff=0,iEvenSum=0,iOddSum=0;
    public int CountDiff(int iNo)
    {
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            if(iDigit%2==0)
            {
                iEvenSum=iEvenSum+iDigit;
            }
            else
            {
                iOddSum=iOddSum+iDigit;
            }
        }
        iDiff=iEvenSum-iOddSum;
        return iDiff;
    }
}