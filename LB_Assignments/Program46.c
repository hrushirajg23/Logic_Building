//Write a program which accept range from user and display all numbers between that range
//Time Complexity O(n)
#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("\nInvalid Range");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("\nEnter starting point");
    scanf("%d",&iValue1);
    printf("\nEnter ending point ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}