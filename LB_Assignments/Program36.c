//Write a program which acceprs number from user and display below pattern

// Input: 5
// Output: * * * * * # # # # #

//Time Complexity O(n^2)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("* ");
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("# ");
    }

}

int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}