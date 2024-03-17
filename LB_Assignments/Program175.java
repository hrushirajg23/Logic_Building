/*Program to accept N numbers from user and return product of all Odd elements*/

import java.util.*;

class Program175
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0,iCnt=0,iRet=0;
        System.out.println("Enter the number of elements: ");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements: ");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();    
        }


        
        Number nobj=new Number();

        iRet=nobj.Product(Arr);

        System.out.println(iRet);
        }
}

class Number
{
    public int iCnt=0,iProd=0;
    public int Product(int Brr[])
    {
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            
            if((Brr[iCnt]%2)!=0)
            {
                if(iProd==0)
                {
                    iProd=1;
                }

                iProd=iProd*Brr[iCnt];
            }
        }
        return iProd;
    }
    
}