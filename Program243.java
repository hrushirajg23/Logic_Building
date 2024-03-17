import java.util.*;
import Marvellous.Arithematic;

class Program243
{
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

        Arithematic aobj=new Arithematic(iNo1,iNo2);

        iAns=aobj.Addition();

        System.out.println("Addition is "+iAns);

        sobj.close();
    }
}


//COmmands
//1.  javac -d . Arithematic.java  
//2.  javac Program243.java
//3.  java Program243.java