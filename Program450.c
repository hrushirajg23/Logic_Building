//take number from user and display its digits
#include<stdio.h>

void  DisplayDigits( int iNo)
{
    
    int iDigit=0;

    if(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\t",iDigit);
        iNo=iNo/10;
        
        DisplayDigits(iNo);
        
    }
    
    
}



int main()
{
    int iValue=0,iRet=0;
    printf("ENter a value:\n");
    scanf("%d",&iValue);
    DisplayDigits(iValue);
    
    return 0;
}