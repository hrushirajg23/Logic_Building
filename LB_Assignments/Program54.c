//Write a program which accepts number from user and count frequency of 4 in it

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit=0;
    int iCountFour=0;
    while(iNo!=0)   //9440  944  94 
    {
        iDigit=iNo%10;       
        if(iDigit==4)   
        {
            iCountFour++;   //1  2
        }
        iNo=iNo/10;   //944  94  9  0
    }
    return iCountFour;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter a number: ");
    scanf("%d",&iValue);
    iRet=CountFour(iValue);
    printf("%d",iRet);
    
    return 0;
}