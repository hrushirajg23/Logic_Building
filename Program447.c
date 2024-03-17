//take number from user and sum its Factors
#include<stdio.h>

int FactorsSum(int iNo)
{
    int iCnt=1;
    int iSum=0;
    while(iCnt<=iNo/2)
    {
        if(iNo%iCnt==0)
        {
            iSum=iSum+iCnt;
            
        }
        iCnt++;
    }
    return iSum;
    
    
}



int main()
{
    int iValue=0,iRet=0;
    printf("ENter a value:\n");
    scanf("%d",&iValue);
    iRet=FactorsSum(iValue);
    printf("Summation of factors is %d\n",iRet);
    return 0;
}