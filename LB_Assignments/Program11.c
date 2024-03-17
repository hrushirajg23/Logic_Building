//Write a program which accepts one number from user and prints that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        return;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" %d",2*iCnt);
    }

    
}

int main()
{
    auto int iValue=0;
    printf("\nEnter a number: ");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}