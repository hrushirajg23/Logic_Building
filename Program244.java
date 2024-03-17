import java.util.*;

class Program244
{
    public static int Factorial(int iNo)
    {
        int iFact=1;
        while(iNo!=0)
        {
            iFact=iFact*iNo;
            iNo--;
        }
        return iFact;
    }

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;
        int iAns=0;

        System.out.println("Enter number : ");
        iValue=sobj.nextInt();

        iAns=Factorial(iValue);

        System.out.println("Factorial of is" +iAns);

        sobj.close();
    }
}


