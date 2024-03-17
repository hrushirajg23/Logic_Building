/*Program to accept N numbers from user and display 
all such elements which are divisibe by 3 & 5 */

import java.util.*;

class Program164
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iSize=0,iCnt=0;
        System.out.println("Enter the Number of elements : ");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];  //int *Arr=(int *)malloc(sizeof(int)*iSize)

        System.out.println("Enter the elements: ");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        ArrayDemo aobj=new ArrayDemo();

        aobj.Display(Arr);
    }
}

class ArrayDemo
{
    public int iCnt=0;
    public void Display(int Brr[])
    {
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if((Brr[iCnt]%5==0) && (Brr[iCnt]%3)==0)
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }
    }
}