//take number from user and find its factors
#include<stdio.h>

void Factors(int iNo)
{
     int iCnt=1;
    
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}



int main()
{
    int iValue=0;
    printf("ENter a value:\n");
    scanf("%d",&iValue);
    Factors(iValue);
    return 0;
}