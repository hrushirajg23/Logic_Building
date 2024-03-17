import java.util.*;

class Program240
{

    //hi method static ahe karan main method can access only static functions
    public static int Addition(int iValue1,int iValue2)
    {
        int iSum=0;
        iSum=iValue1+iValue2;
        return iSum;
    }


    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iNo1=0;
        int iNo2=0;

        int iAns=0;

        System.out.println("Enter first NUmber");
        iNo1=sobj.nextInt();
        System.out.println("Enter second NUmber");
        iNo2=sobj.nextInt();

        iAns=Addition(iNo1,iNo2);

        System.out.println("Addition is "+iAns);
    }
}