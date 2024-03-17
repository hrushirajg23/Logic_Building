//Write a program which accepts radius of a circle from useer and calculate its area
//Consider valueof PI as 3.14
//Time Complexity O(1)
#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea=0.0;
    dArea=PI*fRadius*fRadius;
    return dArea;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("%lf",dRet);

    return 0;
}