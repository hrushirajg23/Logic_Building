//PROGRAMMING ON DIGITS
//Program to accept number from user and return sum of its digits

#include<stdio.h>
int display(int iNo)
{
    int iDigit=0;
    int iSum=0;

    while(iNo!=0)    
    {
        iSum=iSum+(iNo%10);
        iNo=iNo/10;
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nENter a number: ");
    scanf("%d",&iValue);

    iRet=display(iValue);

    printf("\nSum of digits is :%d",iRet);

    return 0;
}