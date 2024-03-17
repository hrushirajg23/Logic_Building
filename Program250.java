//Problem Based on Array//take input in array and display it

import java.util.*;

class Program250
{
   

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0 ,iCnt=0;
        
        System.out.println("Enter the number of elements : ");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements: ");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            System.out.println(Arr[iCnt]);
             //eka line madhe display karaycha asel tar       System.out.print(Arr[iCnt]+"\t");
        }

        sobj.close();
    }
}


