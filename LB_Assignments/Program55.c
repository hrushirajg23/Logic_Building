//Write a program which accepts number from user and count frequency of such a digit which are less than 6


#include<stdio.h>

int Count(int iNo)
{
    int iDigit=0;
    int iFreq=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
        {
            iFreq++;
        }
        iNo=iNo/10;
    }
    return iFreq;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("ENter number");
    scanf("%d",&iValue);

    iRet=Count(iValue);

    printf("%d",iRet);

    return 0;
}