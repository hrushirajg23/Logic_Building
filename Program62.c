//Write a program to accept number from user and return its reversed form

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=(iRev*10)+iDigit;
    }
    return iRev;
}

int main()
{
    int iValue=0;
    printf("Enter Number ");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=Reverse(iValue);
    printf("Reversed number is %d",iRet);
    return 0;
}