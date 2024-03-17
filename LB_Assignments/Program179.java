/*
Program to accept string from user and reverse the contents of string
by toggling the case
 */
import java.util.*;

class Program179
{
    public static String StrRevTogX(String str)
    {
        int iCnt=0;
        char Arr[]=str.toCharArray();
        int iStart=0;
        int iEnd=Arr.length-1;
        char last=Arr[iEnd];
        char first=Arr[iStart];

        char swap;
        char c;
        int k=0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            k=0;
            if(Arr[iCnt]>='a' && Arr[iCnt]<='z')
            {
                c=str.charAt(iCnt);
                k=((int)c-32);
                Arr[iCnt]=((char)k);

            }
            else if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
            {
                c=str.charAt(iCnt);
                k=((int)c+32);
                Arr[iCnt]=((char)k);

            }
            else
            {}

            //System.out.print(Arr[iCnt]);
        }

        while(iEnd>=iStart)
        {

            swap=Arr[iStart];
            Arr[iStart]=Arr[iEnd];
            Arr[iEnd]=swap;

            iEnd--;
            iStart++;
        }

        String cat=new String(Arr); 

        return cat;
        
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        //boolean bRet=false;
        String str1=null,sRet=null;

        System.out.println("Enter 1st string: ");
        str1=sobj.nextLine();

        sRet=StrRevTogX(str1);

        System.out.println(sRet);

    }
}


//String str="abc";
        //char c=str.charAt(iCnt)
        //System.out.println((int)c)
