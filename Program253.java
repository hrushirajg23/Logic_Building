//Problem Based on Array//Sum of array

import java.util.*;

class Program253
{
    public static void Display(int Brr[])
    {
        int iCnt=0;

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println();
    }

    public static int Addition(int Crr[])
    {
        int iCnt=0;
        int iSum=0;

        for(iCnt=0;iCnt<Crr.length;iCnt++)
        {
            iSum=iSum+Crr[iCnt];
        }

        return iSum;


    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0 ,iCnt=0,iRet=0;
        
        System.out.println("Enter the number of elements : ");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements: ");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        Display(Arr);

        iRet=Addition(Arr);

        System.out.println("Addition is : "+iRet);

        sobj.close();
    }
}


