//Write a program that accepts a number and prints numbers till that number
//Time complexity 0(n)
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;                     
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" %d",iCnt);
    }
}

int main()
{
    int iValue=0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}