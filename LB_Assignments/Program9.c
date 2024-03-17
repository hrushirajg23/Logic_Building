//Accept two number from user and display first number in second number of times

#include<stdio.h>

void display(int iNo,int iFrequency)
{
    int iCnt=0;
    for(iCnt=0;iCnt<(unsigned int)iFrequency;iCnt++)
    {
        printf(" %d",iNo);
    }
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number ");
    scanf("%d",&iValue);
    printf("Enter Frequency ");
    scanf("%d",&iCount);

    display(iValue,iCount);
    return 0;
}