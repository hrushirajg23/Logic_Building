//Write a program which accept distance in kilometre and convert it into meter
//Time Complexity O(1)
#include<stdio.h>

int KMtoMeter(int iNo)
{
    iNo=iNo*1000;
    return iNo;
}

int main()
{
    int iValue=0,iRet=0;
    printf("Enter distance");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("%d",iRet);
    return 0;
}