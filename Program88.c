//Take a number from user and display that numbers from 1 to that number 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
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