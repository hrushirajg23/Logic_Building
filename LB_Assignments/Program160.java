//Accept String from user and display it in reverse order
import java.util.*;

class Program160
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        String str=null;
        System.out.println("Enter a string : ");
        str=sobj.nextLine();

        StringDemo dobj=new StringDemo(str);
        dobj.Reverse();

    }
}

class StringDemo
{
    public String str;
    public StringDemo(String x)
    {
        this.str=x;
    }

    public void Reverse()
    {
        char Arr[]=str.toCharArray();
        int iCnt=0;
        try{
            for(iCnt=Arr.length-1;iCnt>=0;iCnt--)
            {
                System.out.print(Arr[iCnt]);
            }
            System.out.println();
    
        }
        catch(ArrayIndexOutOfBoundsException aobj)
        {
            System.out.println("Arra Index out of Bounds Exception "+aobj);
        }


    }
    

}