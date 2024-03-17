//Write a program which accepts number from user and count frequency of 2 in it

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit=0;
    int iCountTwo=0;
    while(iNo!=0)   //922432  92243  9224 922 92 9 
    {
        iDigit=iNo%10;      //2 
        if(iDigit==2)
        {
            iCountTwo++;   //1  2  3
        }
        iNo=iNo/10;   //92243  9224 922 92 9 0
    }
    return iCountTwo;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter a number: ");
    scanf("%d",&iValue);
    iRet=CountTwo(iValue);
    printf("%d",iRet);
    
    return 0;
}