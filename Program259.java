//Problem Based on Strings


import java.util.*;

class Program259
{
    public static void Display(String str)
    {
        char Arr[]=str.toCharArray();
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;

        System.out.println("Enter your name: ");
        str=sobj.nextLine();

        Display(str);

       
        sobj.close();
    }
}


