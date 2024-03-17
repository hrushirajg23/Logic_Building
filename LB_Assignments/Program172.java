/*Program to accept N numbers from user and accept one another number as No
,return index of first occurence of that No*/

import java.util.*;

class Program172
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0,iCnt=0,iValue=0;
        int iRet=0;
        System.out.println("Enter the number of elements: ");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements: ");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();    
        }

        System.out.println("Enter the Number you want to search ");
        iValue=sobj.nextInt();
        
        Number nobj=new Number();

        iRet=nobj.FirstOcc(Arr,iValue);
        
        System.out.println(iRet);
   }
}

class Number
{
    public int iCnt=0,iNo=0,iOcc=0;
    public int FirstOcc(int Brr[],int iNo)
    {
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]==iNo)
            {
                iOcc=iCnt;
                break; 
                  
            }
        }
        if(iOcc==0)
        {
            return -1;
        }
        else
        {
            return iOcc;
        }

        
    }
}