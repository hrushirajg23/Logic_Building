//Write a program to accept number from user and check if that number is a palindrome number

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iCopy=iNo;  //store iNo value in iCopy karan aplyala ti original value nantar compare karaychie
                    //karan nantar iNo chi value loop mule zero honare i.e original value change honare
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=(iRev*10)+iDigit;
    }
    return(iRev==iCopy);
    

}

int main()
{
    int iValue=0;
    printf("Enter Number ");
    scanf("%d",&iValue);
    bool bRet=false;
    bRet=CheckPalindrome(iValue);
    if(bRet==true)
    {
        printf("\n %d is Palindrome Number",iValue);
    }
    else
    {
        printf("\n%d is Not a Palindrome Number",iValue);
    }
    return 0;
}