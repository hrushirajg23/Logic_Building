/*
Write a program which accept number from user and return its product of digits
Input: 523
Output: 30

*/


#include<stdio.h>

int Mult(int iNo)
{
    static int iMult=1;
    int iDigit=0;
    if(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iMult=iMult*iDigit;
        Mult(iNo);
    }
    return iMult;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=Mult(iValue);

    printf("Product of digits is %d\n",iRet);
    return 0;
}


