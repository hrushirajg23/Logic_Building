//Problem Based on Array//take input in array and display it

import java.util.*;

class Program251
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
            //Line by line display karaycha asel tar System.out.println(Arr[iCnt]);
            System.out.print(Arr[iCnt]+"\t");  //display in single line
        }
        System.out.println();  //bring cmd to next line

        sobj.close();
    }
}


