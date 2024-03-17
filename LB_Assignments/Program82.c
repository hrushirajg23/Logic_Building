//Accept Number from user an display the below pattern
/*
Input:5
Output: 5 # 4 # 3 # 2 # 1 #

*/


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}

int main()
{
    int iValue=0;
    printf("\nEnter the number of elements: ");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}