//take number from user and calculate factorial
#include<stdio.h>

int FactorialR( int iNo)
{
    static int iFact=1;
    if(iNo>=1)
    {
        iFact=iFact*iNo;
        iNo--;
        FactorialR(iNo);
        
        
    }
    return iFact;
    
}



int main()
{
    int iValue=0,iRet=0;
    printf("ENter a value:\n");
    scanf("%d",&iValue);
    iRet=FactorialR(iValue);
    printf("Factorial is %d\n",iRet);
    return 0;
}