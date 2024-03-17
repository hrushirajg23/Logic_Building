//Display Number Line

//Input: 4
//Outpu: -4 -3 -2 -1 0 1 2 3 4
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
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