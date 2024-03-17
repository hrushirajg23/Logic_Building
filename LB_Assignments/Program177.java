/*
Program which accept 2 strings from user and compare if they are equal or not
 */
import java.util.*;

class Program177
{
    public static boolean StrCmpX(String src,String dest)
    {
        char Arr[]=src.toCharArray();
        char Brr[]=dest.toCharArray();

        boolean bFlag=false;

        int iCnt1=src.length();
        int iCnt2=dest.length();
        int i=0;
        if(iCnt1==iCnt2)
        {
            for(i=0;i<iCnt1;i++)
            {
                if(Arr[i]==Brr[i])
                {
                    bFlag=true;
                }
                else
                {
                    bFlag=false;
                    break;
                }
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

        bRet=StrCmpX(str1,str2);

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