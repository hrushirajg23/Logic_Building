/*Write a java program which accepts two strings from user and concat N characters 
of second string after first string. Value of N should be accepted from user*/

/* If Count (N) entered by user is greater then size of second string 
concat whole second string after first string*/


import java.util.*;

class Program176
{
    public static String StrNCatX(String src,String dest,int iCnt)
    {
        int i=0;
        char Brr[]=dest.toCharArray();

        for(i=0;i<iCnt;i++)
        {
            src=src+Brr[i];
        }
        return src;


    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iCount=0;
        String str1=null,str2=null;

        System.out.println("Enter the 1st string  :");
        str1=sobj.nextLine();

        System.out.println("Enter the 2nd string  :");
        str2=sobj.nextLine();

        System.out.println("Enter the number of characters you want to concat: ");
        iCount=sobj.nextInt();

       String sRet=StrNCatX(str1,str2,iCount);

       System.out.println(sRet);
       

    }
}