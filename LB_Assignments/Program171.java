/*Program to accept N numbers from user and accept one another number as No
,check whether No is present or not*/

import java.util.*;

class Program171
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0,iCnt=0,iValue=0;
        boolean bRet=false;
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

        bRet=nobj.Check(Arr,iValue);
        if(bRet==true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
   }
}

class Number
{
    public int iCnt=0,iNo=0;
    boolean bFlag=false;
    public boolean Check(int Brr[],int iNo)
    {
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]==iNo)
            {
                bFlag=true;
                break;
                
            }
        }
        return bFlag;
    }
}