/*Accept string from user and check whether the string is 
palindrome or not without considering its case
*/

import java.util.*;

class Program180
{
    public static boolean StrPallindrome(String str)
    {
       boolean bFlag=false;
       char Arr[]=str.toCharArray();
       int iStart=0;
       int iEnd=Arr.length-1;

       char c,x,y;
       int i,j;

        while(iEnd>=iStart)
        {
            c=Arr[iStart];
            i=((int)c-32);
            j=((int)c+32);

            x=((char)i);
            y=((char)j);

            if(Arr[iStart]==Arr[iEnd] || x==Arr[iEnd] || y==Arr[iEnd])
            {
                bFlag=true;
            }

            else if(Arr[iStart]!=Arr[iEnd] || x!=Arr[iEnd] || y!=Arr[iEnd])
            {
                break;
            }

            iStart++;
            iEnd--;
        }
        return bFlag;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        String str1=null;
        boolean bRet=false;

        System.out.println("Enter a string: ");
        str1=sobj.nextLine();

        bRet=StrPallindrome(str1);

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