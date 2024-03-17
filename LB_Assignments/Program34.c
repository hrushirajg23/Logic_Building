//Write a program which accepts number from user and display its table
//Time Complexity O(1)
#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt<=iNo*10;iCnt=iCnt+iNo)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    int iValue=0;
    printf("\nEnter number");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}