//Take a number from user and display numbers from 0 to that number 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);                        
    }
    printf("\n");
}

int main()
{
    int iValue=0;
    printf("\nEnter the number of times you want to display :");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}