//Programming based on digits
//Program to count the number of digits in a number given bby user and return the nnumber of digits

#include<stdio.h>

int display(int iNo)
{
    
    int iCnt=0;

    while(iNo!=0)    
    {
        iNo=iNo/10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nENter a number: ");
    scanf("%d",&iValue);

    iRet=display(iValue);

    printf("\nNumber of digits are :%d",iRet);

    return 0;
}