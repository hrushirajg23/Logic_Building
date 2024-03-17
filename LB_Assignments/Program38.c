//Write a program to find even factorial of a number
//Time Complesit: O(n)
#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact=1;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iFact=iFact*iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter number");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);
    printf("\nTHe Even Factorial of th numberr is %d",iRet);


    return 0;
}