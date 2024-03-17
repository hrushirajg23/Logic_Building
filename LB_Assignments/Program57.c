//Write a program which accept number from user and return the count of Odd digits

#include<stdio.h>

int CountOdd(int iNo)
{
    int iOdd=0;
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)   
    {
        iDigit=iNo%10;   
        if(iDigit%2!=0)  
        {
            iOdd++;     
        }
        iNo=iNo/10; 
    }
    return iOdd;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number  ");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);
    printf("%d",iRet);

    return 0;
}