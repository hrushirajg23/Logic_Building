/*
Write a program which accept number from user and return summation of digits
Input: 879
Output: 24

*/

#include<stdio.h>

int Sum(int iNo)
{
    static int iSum=0;
    int iDigit=0;
    if(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iSum=iSum+iDigit;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=Sum(iValue);

    printf("Sum of digits is %d\n",iRet);
    return 0;
}


/*

main

Sum(879)   iDigit=9   iNo=87  

Sum(87)    iDigit=7   iNo=8  

Sum(8)     iDigit=8   iNo=0  

Sum(0)     iDigit=0   iNo=0 


                                            



***static section****   
*                   *
*    iSum=24        *                         
*********************

*/