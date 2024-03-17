//Program to check if given number is prime number or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt=0;
    if(iNo<0)           //UPDATER
    {
        iNo=-iNo;
    }
    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            return false;       //never write return inside a loop// check the updated code
        }

    }
    return true;
}

int main()
{
    int iValue=0;
    printf("\nEnter a number: ");
    scanf("%d",&iValue);
    bool bret=false;

    bret=CheckPrime(iValue);
    if(bret==true)
    {
        printf("\n%d is a prime number",iValue);
    }
    else
    {
        printf("%d is not a prime number",iValue);
    }
    return 0;
}