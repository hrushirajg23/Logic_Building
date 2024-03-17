//Write a program which accept number from user and return the count of even digits

#include<stdio.h>

int CountEven(int iNo)
{
    int iEven=0;
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)   //2395  239  23 2
    {
        iDigit=iNo%10;   //5 9 3 2
        if(iDigit%2==0)  
        {
            iEven++;     //1
        }
        iNo=iNo/10; //239 23 2 0
    }
    return iEven;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number  ");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);
    printf("%d",iRet);

    return 0;
}