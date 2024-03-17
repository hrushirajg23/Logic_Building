//Write a program which accepts number from user and display its table in reverse order
//Time Complexity O(1)
#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=10*iNo;iCnt>=1;iCnt=iCnt-iNo)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    int iValue=0;
    printf("\nEnter number");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;
}