//Program to accept a number from user and printf that number of * on screen
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue=0;
    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}