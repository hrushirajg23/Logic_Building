//Write a program which accept range from user and display all even numbers between that range
//Time Complexity O(n)

#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("\nInvalid Range");
    }
    
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("\nEnter starting point");
    scanf("%d",&iValue1);
    printf("\nEnter ending point ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}