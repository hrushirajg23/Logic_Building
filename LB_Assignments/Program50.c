//Write a program which accept range from user and display all number in between that range in reversed order
//Time Complexity O(n)
#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt=0;
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf(" %d",iCnt);
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("\nEnter starting point: ");
    scanf("%d",&iValue1);
     printf("\nEnter ending point: ");
    scanf("%d",&iValue2);
    RangeDisplayRev(iValue1,iValue2);


    return 0;
}