/*Program to accept N numbers from user and accept Range,
Display all elements from that Range*/

import java.util.*;

class Program174
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0,iCnt=0,iNo1=0,iNo2=0;
        System.out.println("Enter the number of elements: ");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements: ");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();    
        }

        System.out.println("Enter the Start: ");
        iNo1=sobj.nextInt();

        System.out.println("Enter the End: ");
        iNo2=sobj.nextInt();
        
        Number nobj=new Number();

        nobj.Display(Arr,iNo1,iNo2);
        }
}

class Number
{
    public int iCnt=0;
    public void Display(int Brr[],int iStart,int iEnd)
    {
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]>iStart && Brr[iCnt]<iEnd)
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }

    }
}