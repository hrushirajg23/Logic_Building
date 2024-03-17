//Problem Based on Strings


import java.util.*;

class Program256
{

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;

        System.out.println("Enter your name: ");
        str=sobj.nextLine();

        int iCnt=0;

        for(iCnt=0;iCnt<str.length();iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }

        System.out.println("Your name is : "+str);

       
        sobj.close();
    }
}


