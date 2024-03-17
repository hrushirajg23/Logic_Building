//Program to check if given number is prime number or not
//using the industry approach,avoiding writing 'return' in a loop

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    bool bFlag=true;
    int iCnt=0;
    if(iNo<0)           //UPDATER
    {
        iNo=-iNo;
    }
    //   1      //2          //3
    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)    //4
        {
            bFlag=false;    //jar number prime nasel tar flag=false
            break;         //loop thambvaycha karan ekda ka eka number cha 1st factor milala tar to it can't be prime,
                          // so aviod looping unnecessarily
        }
    }
    return bFlag;
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