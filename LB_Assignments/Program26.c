//Write a program which accepts number from user and prints that number of '$' & '*' on screen
//Time Complexity O(n)
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" $ *");
    }
}

int main()
{
    int iValue=0;
    printf("ENter number  ");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}