//Problem Based on Strings


import java.util.*;

class Program260
{
    public static int CountCapital(String str)
    {
        char Arr[]=str.toCharArray();
        int iCnt=0;
        int iCount=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
            {
                iCount++;
            }
        }
        return iCount;
    }

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;

        System.out.println("Enter your name: ");
        str=sobj.nextLine();

        int iRet=0;

        iRet=CountCapital(str);

        System.out.println("Capital letters are: "+iRet);




       
        sobj.close();
    }
}


