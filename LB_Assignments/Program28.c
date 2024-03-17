//Write a program which acceptsnumber from user and prints its number line
//Time Complexity 0(n)
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    auto int iValue=0;
    printf("\nenter number  ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
