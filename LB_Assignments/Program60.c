/*Write a program which accepts number from user and return 
difference between summation of even digits and summation of odd digits*/


#include<stdio.h>

int CountDiff(int iNo)
{
    int iDiff=0;
    int iEvenSum=0;
    int iOddSum=0;
    int iDigit=0;

    while(iNo!=0)    //2395  239  23 2
    {
        iDigit=iNo%10;   //5  9  3  2
        if(iDigit%2==0)   
        {
            iEvenSum=iEvenSum+iDigit;  //0+2=2
        }
        if(iDigit%2!=0)  
        {
            iOddSum=iOddSum+iDigit;   //0+5+9+3=17
        }

        iNo=iNo/10;  //239  23  2 0
    }
    iDiff=iEvenSum-iOddSum;
    return iDiff;

}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter number: ");
    scanf("%d",&iValue);
    iRet=CountDiff(iValue);
    printf("%d",iRet);

    return 0;

}