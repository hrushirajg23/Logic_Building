/*Write a program which accepts N numbers from user and return difference between 
summation of even elements and summation of odd elements*/

import java.util.*;

class Program161
{
    public static int Difference(int Arr[])
    {
        int EvenSum=0,OddSum=0;
        int iCnt=0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]%2==0)
            {
                EvenSum=EvenSum+Arr[iCnt];
            }
            else
            {
                OddSum=OddSum+Arr[iCnt];
            }
        }
        return EvenSum-OddSum;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iSize=0,iRet=0,iCnt=0;

        System.out.println("Enter the number of elements ");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements: ");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        iRet=Difference(Arr);

        System.out.println(+iRet);


    }
}
