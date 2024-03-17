//probelm: accept two numbers from user and return the largest

#include<stdio.h>

int Minimum(int inum1,int inum2)
{
    if(inum1<inum2 )
    {
        return inum1;
    }
    else
    {
        return inum2;
    }
}

int main()
{
    auto int iValue1=0,iValue2=0;
    auto int iRet=0;

    printf("\nEnter first number: ");
    scanf("%d",&iValue1);
    printf("\nEnter second number: ");
    scanf("%d",&iValue2);

    iRet=Minimum(iValue1,iValue2);

    printf("\nThe minimum betw two is %d",iRet);
    return 0;
}