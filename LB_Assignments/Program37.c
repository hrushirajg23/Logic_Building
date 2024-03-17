//Accept amount in US dollar and return its corresponding value in Indian currency ,Consider 1$ is 70 Rupees
//Time Complexity O(1)
#include<stdio.h>

int DollarToINR(int iNo)
{
    iNo=iNo*70;
    return iNo;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter number of USD");
    scanf("%d",&iValue);
    iRet=DollarToINR(iValue);
    printf("Value in INR is %d",iRet);
    return 0;
}