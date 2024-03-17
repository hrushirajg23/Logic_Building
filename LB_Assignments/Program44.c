//Write a program which accepts temperature in fahrenheit and convert it into celsius
//1 celsius=(Fahrenheit-32)*(5/9)
//Time Complexity O(1)


#include<stdio.h>

double FHtoCS(float fTemp)
{
    double dCelsius=0.0;
    dCelsius=((fTemp-32.0)*(5.0/9.0));
    return dCelsius;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);

    dRet=FHtoCS(fValue);

    printf("%lf",dRet);
    return 0;
}