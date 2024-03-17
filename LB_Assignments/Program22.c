//Write a program which accepts one number from user and checks whether that number is greater than 100 or not

#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    bool iAns=false;
    if(iNo>100)
    {
        iAns=true;
    }
    return iAns;
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Please enter number: ");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);
    if(bRet==true)
    {
        printf("\nGreater");
    }
    else
    {
        printf("\nSmaller");
    }
    return 0;
}