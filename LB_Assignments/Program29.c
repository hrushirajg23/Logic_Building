//Write a program which accepts N from user and prints all odd numbers upto N
//Time Complexity 0(n/2)


#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0;
        // 1     2         3
    for(iCnt=1;iCnt<=iNo;iCnt=iCnt+2)
    {
        printf("%d ",iCnt); //4
    }
}

int main()
{
    int iValue=0;
    printf("\nEnter number: ");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    return 0;
}