/*
Write a program which accept number from user and return its factors
Input: 879
Output: 24

*/

#include<stdio.h>

int Fact(int iNo)
{
    static int iFact=1;
    if(iNo>=1)
    {
        iFact=iFact*iNo;
        Fact(iNo-1);
    }
    return iFact;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=Fact(iValue);

    printf("Factorial is %d\n",iRet);
    return 0;
}


