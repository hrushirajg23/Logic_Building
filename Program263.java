import java.util.*;

class Program263
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0;
        int iDigit=0;
        int iCnt=0;

        System.out.println("Enter Number: ");
        iNo=sobj.nextInt();

        while(iNo!=0)
        {
            iDigit=iNo%2;
            iNo=iNo/2;
            if(iDigit==1)
            {
                iCnt++;
            }

            System.out.print(iDigit);
        }
        System.out.println();

        System.out.println("Number of 1 bits are :"+iCnt);
    }
}