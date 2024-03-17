//Write a program which accepts a number from user and display its factors in decreasing order

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=(iNo/2);iCnt>=1;iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf(" %d",iCnt);
        }
    }
}

int main()
{
    int iValue=0;
    printf("\nEnter a number: ");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}