//Write a program which return difference between even and odd factorial of a given number
//Time Complexity O(n)
#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt=0;
    int iEvenFact=1;
    int iOddFact=1;
    int iDifference=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iEvenFact=iEvenFact*iCnt;
        }
        else
        {
            iOddFact=iOddFact*iCnt;
        }
    }
    iDifference=iEvenFact-iOddFact;
    return iDifference;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter number");
    scanf("%d",&iValue);
    iRet=FactorialDiff(iValue);
    printf("\nTHe  Factorial Difference is %d",iRet);


    return 0;
}