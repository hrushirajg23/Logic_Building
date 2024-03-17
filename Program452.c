//take number from user and calculate factorial
#include<stdio.h>

int Factorial( int iNo)
{
    int iFact=1;
    while(iNo>=1)
    {
        iFact=iFact*iNo;
        iNo--;
    }
    return iFact;
    
}



int main()
{
    int iValue=0,iRet=0;
    printf("ENter a value:\n");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);
    printf("Factorial is %d\n",iRet);
    return 0;
}