//Write program which accepts two numbers and check if they are equal or not

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1,int iNo2)
{
    bool iAns=false;
    if(iNo1==iNo2)
    {
        iAns=true;
    }
    return iAns;
}

int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&iValue1,&iValue2);
    bRet=ChkEqual(iValue1,iValue2);

    if(bRet==true)
    {
        printf("\nEqual");
    }
    else
    {
        printf("\nNot Equal");
    }

    
    return 0;
}