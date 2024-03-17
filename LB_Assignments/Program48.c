//Write a program which accept range from user and return addition of all that numbers in between that range
//Time Complexity O(n)

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    if(iStart<iEnd)
    {
        printf("\nInvalid Range");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("\nEnter starting point");
    scanf("%d",&iValue1);
    printf("\nEnter ending point ");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    printf("%d",iRet);
    return 0;
}