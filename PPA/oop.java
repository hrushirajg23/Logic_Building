import java.util.*;

class Arithmetic
{
    public int Value1;
    public int Value2;

    public Arithmetic(int A,int B)
    {
        this.Value1=A;
        this.Value2=B;

    }
    public int Addition()
    {
        int result=0;
        result= this.Value1+this.Value2;
        return result;
    }
    public int Subtraction()
    {
        int result=0;
        result= this.Value1-this.Value2;
        return result;

    }
}


class oop
{
    public static void main(String arg[])
    {
        int no1=0,no2=0,ans=0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number: ");
        no1=nextInt();
        System.out.println("Enter second number: ");
        no2=nextInt();

        Arithmetic aobj = new Arithmetic(no1,no2);    //constructor
        //If static Arithmetic obj(no1,no2)

        ans=aobj.Addition();
        System.out.println("Addition is  "+ans);

        ans=aobj.Subtraction();
        System.out.println("Subtraction is  "+ans);
    }
}