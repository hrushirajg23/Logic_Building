/*
Program which accept 2 strings from user and take a number from user
and compare if that number of characters of both strings are equal or not
 */
import java.util.*;

class Program178
{
    public static boolean StrCmpX(String src,String dest,int iCount)
    {
        char Arr[]=src.toCharArray();
        char Brr[]=dest.toCharArray();

        boolean bFlag=false;

        int iCnt1=src.length();
        int iCnt2=dest.length();
        int i=0;
        
        bFlag=true;
        for(i=0;i<iCount;i++)
        {
            if(Arr[i]!=Brr[i])
            {
                bFlag=false;
                break;
            }

        }
    

        return bFlag;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        boolean bRet=false;
        String str1=null,str2=null;

        System.out.println("Enter 1st string: ");
        str1=sobj.nextLine();

        System.out.println("Enter 2nd string: ");
        str2=sobj.nextLine();

        int iNo=0;
        System.out.println("Enter the number of characters you want to compare: ");
        iNo=sobj.nextInt();

        bRet=StrCmpX(str1,str2,iNo);

        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

    }
}