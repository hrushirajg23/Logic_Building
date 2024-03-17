//Problem:accept marks and total from user and return the percentage

#include<stdio.h>

float calculatePercentage(int imarks,int iTotal)
{
    auto float fPercentage=0.0f;
    if(imarks<0 || iTotal<0 || imarks>iTotal)   //filter
    {
        printf("\nINVALID INPUT");
        return fPercentage;
    }
    fPercentage=(((float)imarks/(float)iTotal)*100);
    return fPercentage;
}

int main()
{
    auto int iValue1=0,iValue2=0;
    auto float fRet=0.0f;

    printf("\nEnter the marks : ");
    scanf("%d",&iValue1);
    printf("\nEnter the total marks : ");
    scanf("%d",&iValue2);

    fRet=calculatePercentage(iValue1,iValue2);

    printf("\nTHe percentage is %f",fRet);
    return 0;
}