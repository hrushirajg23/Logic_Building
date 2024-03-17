//Write a program which accept area in square feet and convert it into square meter
//(1 Square feet = 0.0929 square meter)
//Time Complexity O(1)
#include<stdio.h>

double ConvertToMeter(int iArea)
{
    double dArea=0.0;
    dArea=(double)iArea*0.0929;
    return dArea;
}

int main()
{
    int iValue=0;
    double dRet=0.0;
    printf("\nEnter area in square feet");
    scanf("%d",&iValue);
    dRet=ConvertToMeter(iValue);
    printf("%lf",dRet);
    return 0;
}