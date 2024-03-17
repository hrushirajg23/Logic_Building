//Accept a number from user and check whether it is even or odd

/*ALGO:
    START
        Accept number from user
        if number divisible by 2 return true
        else return false
    STOP
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue=0;

    BOOL bRet=FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);
    if(bRet==1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}