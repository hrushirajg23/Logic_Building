//Program to accept a number from user and printf that number of * on screen(while loop)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    while(iNo>iCnt)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}