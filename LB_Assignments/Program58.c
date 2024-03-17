//Write a program which accepts number from user and return the count of digits in between 3 and 7

#include<stdio.h>

int CountRange(int iNo)
{
    int iCount=0;
    int iDigit=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit>3 && iDigit<7)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter number: ");
    scanf("%d",&iValue);
    iRet=CountRange(iValue);
    printf("%d",iRet);

    return 0;

}