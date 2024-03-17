//Write a progrram which accepts width and height of rectangle  from user  and calculate its area
//Time Complexity O(1)
#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double dArea=0.0;
    dArea=fWidth*fHeight;
    return dArea;
}

int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;

    printf("\nEnter width ");
    scanf("%f",&fValue1);
    printf("\nEnter length ");
    scanf("%f",&fValue2);
    dRet=RectArea(fValue1,fValue2);

    printf("%lf ",dRet);
    return 0;
}